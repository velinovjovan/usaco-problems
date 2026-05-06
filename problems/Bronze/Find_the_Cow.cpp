#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ifstream fin("cowfind.in");
	ofstream fout("cowfind.out");
	
	string s;
	fin >> s;
	
	vector<int> backLegs (s.length());
	backLegs[0] = 0;
	
	for(int i = 1 ; i < s.length() ; ++i){
		backLegs[i] = backLegs[i-1];
		if(s[i] == '(' && s[i-1] == '(') backLegs[i] ++;		
	}
	
	int ans = 0;
	
	for(int i = 1 ; i < s.length() ; ++i){
		if(s[i] == ')' && s[i-1] == ')') ans += backLegs[i];
	}
	
	fout << ans;
}
