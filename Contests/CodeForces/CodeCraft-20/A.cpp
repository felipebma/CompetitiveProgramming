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
	int n,m,soma=0,aux;
	cin >> n >> m;
	while(n--){
		cin >> aux;
		soma +=aux;
	}
	cout << (min(soma,m)) << endl;
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
