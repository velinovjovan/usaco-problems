#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ifstream in ("cowsignal.in");
	ofstream out ("cowsignal.out");
	
	int m,n,k;
	in >> m >> n >> k;
	
	for(int i = 0 ; i < m ; ++i){
		string s;
		in >> s;
		
		vector<char> line;
		
		for(int j = 0 ; j < s.length() ; ++j){
			for(int q = 0 ; q < k ; q ++){
				line.push_back(s[j]);
			}	
		}
		
		for(int q = 0 ; q < k ; q++){
			for(auto it = line.begin() ; it != line.end() ; ++it){
				out << *it;
			}
			out << endl;
		}
	}
	
	
	return 0;
	
}
