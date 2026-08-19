#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ifstream fin ("breedflip.in");
	ofstream fout ("breedflip.out");
	
	int n;
	fin >> n;
	
	string s1;
	string s2;
	
	fin >> s1 >> s2;
	
	int ans = 0;
	bool flipped = false;
	
	for(int i = 0 ; i < n ; ++i){
		
		if(s1[i] == s2[i]){
			flipped = false;
		}
		else{
			if(!flipped){
				flipped = true;
				ans ++;
			}
		}
	}
	
	
	fout << ans;
	
	
	return 0;
}
