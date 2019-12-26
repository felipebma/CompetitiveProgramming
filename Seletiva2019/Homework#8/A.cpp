#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

const int ms = 1e6+3;
vector<bool> sieve(ms,true);
vector<vector<int>> primos(41);

void makeSieve(){
	for (int i = 2; i < ms; i += 1){
		if(sieve[i]){
			int aux=2*i;
			while(aux<ms){
				sieve[aux]=false;
				aux+=i;
			}
		}
	}
}

int exp(int i, int pot){
	int res =1;
	while(pot){
		if(pot&1) res = res*i;
		pot>>=1;
		i*=i;
	}
	return res;
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	vector<int> arr;
	makeSieve();
	for(int i=2;i<ms;i++){
		if(sieve[i]){
		 primos[0].pb(i);
		}
	}
	for(int i=1;i<40;i++){
		for(int j=0;j<primos[i-1].size();j++){
			int aux = primos[0][j]*primos[i-1][j];
			if(aux>1e12) break;
			primos[i].pb(aux);
			arr.pb(aux);
		}
	}
	sort(arr.begin(),arr.end());
	int nCases;
	cin >> nCases;
	while(nCases--){
		int ini,fim;
		cin >> ini >> fim;
		ini = lower_bound(arr.begin(),arr.end(),ini)-arr.begin();
		if(ini==arr.size()){
			cout << 0 << endl;
			continue;
		}
		fim = upper_bound(arr.begin(),arr.end(),fim)-arr.begin();
		cout << fim-ini << endl;

	}
	return 0;
}
