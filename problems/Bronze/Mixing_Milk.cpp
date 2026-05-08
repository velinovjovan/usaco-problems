#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ifstream in ("mixmilk.in");
	ofstream out ("mixmilk.out");
	
	int milk[3];
	int cap[3];
	
	for(int i = 0 ; i < 3 ; ++i){
		in >> cap[i] >> milk[i];
	}
	
	for(int i = 0; i < 100; ++i){
        int cur  =  i      % 3;
        int next = (i + 1) % 3;

        int space = cap[next] - milk[next];
        int pour  = min(milk[cur], space);

        milk[cur]  -= pour;
        milk[next] += pour;
    }

	
	out << milk[0] << endl << milk[1] << endl << milk[2];
	
	
	return 0;

}
