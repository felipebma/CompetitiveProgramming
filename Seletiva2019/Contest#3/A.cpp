#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
#define ll long long
#define int ll

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n,m, cont=0;
	cin >> n >> m;
	while(m>n){
		if(m%2==0){
			m/=2;
		}else{
			m++;
		}
		cont++;
	}
	cout << cont+(n-m);
	return 0;
}
