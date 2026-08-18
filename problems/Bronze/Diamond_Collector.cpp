#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ifstream fin ("diamond.in");
	ofstream fout ("diamond.out");
	
	int n, k;
	fin >> n >> k;
	
	vector<int> diamond (n);
	
	for(int i = 0 ; i < n ; ++i){
		fin >> diamond[i];
	}
	
	sort(diamond.begin(), diamond.end());
	
	int i = 0;
	int j = 0;
	
	int ans = 0;
	
	while(j != n){
		if(diamond[j] - diamond[i] > k){
			i ++;
		}
		else{
			ans = max(ans, j - i + 1);
			j ++;
		}
	}
	
	fout << ans;
	
	
	return 0;
	
}
