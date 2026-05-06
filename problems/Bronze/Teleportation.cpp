#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ifstream in("teleport.in");
	ofstream out("teleport.out");
	
	int a,b,x,y;
	in >> a >> b >> x >> y;
	
	int start = min(a,b);
	int end = max(a,b);
	int enter = min(x,y);
	int leave = max(x,y);
	
	int ans;
	
	ans = min(end - start, abs(start-enter) + abs(end - leave));
	
	out << ans;
	
	
	return 0;
	
}
