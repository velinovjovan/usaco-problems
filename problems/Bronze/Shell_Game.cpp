#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ifstream in ("shell.in");
	ofstream out ("shell.out");
	
	int n;
	in >> n;
	
	int curr[3] = {0,1,2};
	int ans[3] =  {0};
	int temp,swap1,swap2;
	
	for(int i = 0 ; i < n ; ++i){
		in >> swap1 >> swap2;
		swap(curr[--swap1],curr[--swap2]);
		in >> temp;
		
		ans[curr[--temp]] ++;
	}
	
	out << max(ans[0], max(ans[1],ans[2]));
	
	
	return 0;
}
