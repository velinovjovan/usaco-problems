#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("shuffle.in");
    ofstream fout("shuffle.out");

    int n;
    fin >> n;

    vector<int> shuffle(n);
    vector<long long> cows(n);
    vector<long long> temp(n);

    for(int i = 0; i < n; ++i){
        fin >> shuffle[i];
        shuffle[i]--;
    }

    for(int i = 0; i < n; ++i){
        fin >> cows[i];
    }

    for(int k = 0; k < 3; ++k){
        for(int i = 0; i < n; ++i){
            temp[i] = cows[shuffle[i]];
        }

        cows = temp;
    }

    for(int i = 0; i < n; ++i){
        fout << cows[i] << '\n';
    }

    return 0;
}
