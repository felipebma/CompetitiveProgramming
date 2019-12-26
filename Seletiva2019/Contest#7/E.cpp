#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

int fastExp(int i, int pot, int mod){
	int res =1;
	while(pot){
		if(pot&1) res = (res*i)%mod;
		pot>>=1;
		i*=i;
		i%=mod;
	}
	return res;
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int b, p, m;
	while(cin >> b >> p >> m){
		cout << (fastExp(b,p,m)%m) << endl;
	}
	return 0;
}
