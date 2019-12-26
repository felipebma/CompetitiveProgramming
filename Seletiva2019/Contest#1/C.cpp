#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	set<double> angs;
	long long res =0;
	double n, xs,ys,x,y;
	cin >> n >> xs >> ys;
	while(n--){
		cin >> x >>y;
		if(x!=xs){
		  angs.insert((y-ys)/(x-xs));	
		}else res=1;
	}
	cout << res+angs.size();
	return 0;
}
