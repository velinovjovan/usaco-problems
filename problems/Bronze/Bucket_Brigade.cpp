#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ifstream in ("buckets.in");
	ofstream out ("buckets.out");
	
	char temp;
	int barn [2];
	int lake [2];
	int rock [2];
	
	for(int i = 0 ; i < 10 ; ++i){
		for(int j = 0 ; j < 10 ; ++j){
			in >> temp;
			if(temp == 'L'){
				lake[0] = i;
				lake[1] = j;
			}
			else if(temp == 'B'){
				barn[0] = i;
				barn[1] = j;
			}
			else if(temp == 'R'){
				rock[0] = i;
				rock[1] = j;
			}
		}
	}
	
	int res = abs(lake[0] - barn[0]) + abs(lake[1] - barn[1]) - 1;
		
	
	if((barn[0] == lake[0] && lake[0] == rock[0]) && (min(barn[1],lake[1]) < rock[1]) && (max(barn[1],lake[1]) > rock[1])) res += 2;
	if((barn[1] == lake[1] && lake[1] == rock[1]) && (min(barn[0],lake[0]) < rock[0]) && (max(barn[0],lake[0]) > rock[0])) res += 2;
	
	out << res;
	
	
	return 0;
	
}
