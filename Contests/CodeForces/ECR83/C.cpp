#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
using namespace std;
 
vector<bool> pot;

bool populate(int n, int base){
	int pow=0,aux;
	while(n>0){
		aux=n%base;
		if(aux>1 || (pot[pow]&&aux==1)) return false;
		pot[pow] = aux==1||pot[pow];
		pow++;
		n/=base;
	}
	return true;
}


void solve(){
	pot.resize(60,false);
	int n,k, aux;
	bool ans=true;
	cin >> n >> k;
	while(n--){
		cin >> aux;
		ans = ans&&populate(aux, k);
	}
	cout << ((ans)?"YES":"NO") << endl;
	pot.clear();
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
