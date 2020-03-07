#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
using namespace std;
 
void solve(){
	int n, ans=0, pot=1;
	cin >> n;
	while(pot*10<=n) pot*=10;
	while(pot>=10){
		while(n>=pot){
			int aux = (n/pot)*pot;
			ans+=aux;
			n-=aux;
			n+=aux/10;
		}		
		pot/=10;
	}
	ans+=n;
	cout << ans << endl;
} 

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases;
	cin >> nCases;
	while(nCases--){
		solve();	
	}
	return 0;
}
