#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ifstream in("typo.in");
	ofstream out("typo.out");
	
	string s;
	in >> s;
	stack<char> stek;
	int ans = 0;
	
	for(int j = 0; j < s.length() ; ++j){
		if(s[j] == '(') s[j] = ')';
		else s[j] = '(';
		
		for(int i = 0 ; i < s.length() ; ++i){

			if(stek.empty()) stek.push(s[i]);
			else{
				if(stek.top() == '(' && s[i] == ')') stek.pop();
				else stek.push(s[i]);
			}		
		}
		
		if(stek.empty()) ans++;
		stek = {};
		
		if(s[j] == '(') s[j] = ')';
		else s[j] = '(';
	}
	
	out << ans;
	
	
	return 0;
	
}
