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
	int n,k1,k2, aux;
	cin >> n >> k1 >> k2;
	string ganhador;
	while(k1--){
		cin >> aux;
		if(aux==n) ganhador="YES";
	}
	while(k2--){
		cin >> aux;
		if(aux==n) ganhador="NO";
	}
	cout << ganhador << endl;
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
