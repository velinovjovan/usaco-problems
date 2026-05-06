#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int> a (7);
	int sum = 0;
	
	for(int i = 0; i < 7 ; ++i) cin >> a[i];
	
	sort(a.begin(), a.end());
	
	cout << a[0] << ' ' << a[1] << ' ' << a[6] - a[1] - a[0];
	
	
	return 0;

}
