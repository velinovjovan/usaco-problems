#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ifstream in ("word.in");
	ofstream out ("word.out");
	
	int n,k;
	in >> n >> k;
	
	string s;
	int curr = 0;
	in >> s;
	curr = s.length();
	out << s;
	
	for(int i = 1 ; i < n ; ++i){
		in >> s;
		if(curr + s.length() <= k){
			curr += s.length();
			out << ' ' << s;
		}
		else{
			curr = s.length();
			out << endl << s;
		}
	}
	
	
	return 0;
	
}
