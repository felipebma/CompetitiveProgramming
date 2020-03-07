#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
using namespace std;
 
int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int mod = 998244353;
	int n,m, ans=0,acc=0;
	cin >> n >> m;
	string a,b;
	cin >> a >> b;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int aux = 1;
	for(int i=0;i<m;i++){
		if(i<n && a[i]=='1'){
			acc+=aux;
			acc%=mod;
		}
		if(b[i]=='1'){
			ans+=acc;
			ans%=mod;
		}
		aux*=2;
		aux%=mod;
	}
	cout << (ans%mod) << endl;
	return 0;
}
