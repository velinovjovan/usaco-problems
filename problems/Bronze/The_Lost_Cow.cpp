#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ifstream fin("lostcow.in");
	ofstream fout("lostcow.out");
	
	int x, y;
	fin >> x >> y;
	
	vector<int> field (1001);
	
	int ans = 0;
	
	int pos = x;
	int distance = 1;
	int on = 1;
	while(true){
		
		if((y >= pos && y <= x + distance *on) || (y <= pos && y >= x + distance * on)){
			ans += abs(y - pos);
			fout << ans;
			return 0;
		}
		
		int temp = pos;
		pos = x + distance * on;
		
		ans += abs(pos - temp);
		
		distance *= 2;
		on *= -1;
	}
	
	
	return 0;
}
