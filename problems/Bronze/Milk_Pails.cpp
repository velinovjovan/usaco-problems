#include<bits/stdc++.h>

using namespace std;

int maximum = 0;
unordered_map<int,int> done;

void findmax(int& x, int& y, int&m, int curr){
	done[curr] = 1;
	
	if(curr > m) return;
	
	maximum = max(maximum, curr);
	
	if(!done[curr + x]) findmax(x, y, m, curr + x);
	if(!done[curr + y]) findmax(x, y, m, curr + y);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ifstream fin ("pails.in");
	ofstream fout ("pails.out");
	
	int x, y, m;
	fin >> x >> y >> m;
	
	findmax(x, y, m, 0);
	fout << maximum;
	
	return 0;
	
}
