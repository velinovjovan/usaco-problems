#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ifstream in ("promote.in");
	ofstream out ("promote.out");
	
	int br1, br2, sl1, sl2, gl1, gl2, pl1, pl2;
	in >> br1 >> br2 >> sl1 >> sl2 >> gl1 >> gl2 >> pl1 >> pl2;
	
	int ans[3];
	
	ans[2] = pl2 - pl1;
	ans[1] = (gl2 + ans[2]) - gl1; 
	ans[0] = (sl2 + ans[1]) - sl1;
	
	out << ans[0] << endl << ans[1] << endl << ans[2];
	
	
	return 0;
	 
}
