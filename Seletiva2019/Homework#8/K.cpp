#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;
int ms = 1e6+4;
vector<pair<bool,vector<int>>> sieve(ms,make_pair(true,vector<int>(0)));

void make_sieve(){
	sieve[0].first=false;
	sieve[1].first=false;
	int aux;
	for(int i=2;i<ms;i++){
		if(sieve[i].first){
			sieve[i].second.pb(i);
			aux = 2*i;
			while(aux<ms){
				sieve[aux].first=false;
				sieve[aux].second.pb(i);
				aux+=i;
			}
		}
	}
}

int totient(int n){
	int ans =n;
	for(auto i:sieve[n].second){
		ans*=(i-1);
		ans/=i;
	}
	return ans;
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	make_sieve();
	int nCases, n;
	cin >> nCases;
	while(nCases--){
		cin >> n;
		cout << totient(n) << endl;
	}
	return 0;
}
