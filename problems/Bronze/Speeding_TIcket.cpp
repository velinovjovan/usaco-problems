#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("speeding.in");
    ofstream fout("speeding.out");

    int n, m;
    fin >> n >> m;

    vector<int> limit(100);
    vector<int> bessie(100);

    int pos = 0;

    for (int i = 0; i < n; ++i) {
        int len, speed;
        fin >> len >> speed;

        for (int j = 0; j < len; ++j) {
            limit[pos++] = speed;
        }
    }

    pos = 0;

    for (int i = 0; i < m; ++i) {
        int len, speed;
        fin >> len >> speed;

        for (int j = 0; j < len; ++j) {
            bessie[pos++] = speed;
        }
    }

    int ans = 0;

    for (int i = 0; i < 100; ++i) {
        ans = max(ans, bessie[i] - limit[i]);
    }

    fout << ans << '\n';
}
