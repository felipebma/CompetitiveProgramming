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
	int n, aux;
	bool ok;
	cin >> n;
	n--;
	cin >> aux;
	ok = aux%2;	
	bool ans = true;
	while(n--){
		cin >> aux;
		if(aux%2 != ok){
		 	ans = false;
		}
	}
	cout << ((ans)?"YES":"NO") << endl;
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
