#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

int ms=3e6;
vector<bool> sieve(ms,true);
vector<int> primes, factors(ms);


void make_sieve(){
	sieve[0]=false;
	sieve[1]=false;
	for(int i=2;i<ms;i++){
		if(sieve[i]){
			primes.pb(i);
			for(int j=i*2;j<ms;j+=i){
				sieve[j]=false;
			}
		}
	}
	factors[0]=0;factors[1]=0;
	for(int i=2;i<ms;i++){
		int aux=factors[i-1], n=i,pos=0;
		while(!sieve[n]){
			if(n%primes[pos]==0){
				aux++;
				n/=primes[pos];
			}else pos++;
		}
		factors[i] = aux+1;					
	}
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	make_sieve();
	int n, caso=1;
	while(cin >> n){
		if(n<0) break;
		int pos = lower_bound(factors.begin(),factors.end(),n)-factors.begin();
		if(pos<ms && factors[pos]==n){
			cout << "Case " << caso << ": " << pos << "!" << endl; 
		}else{
			cout << "Case " << caso << ": Not possible." << endl; 
		}
		caso++;
	}
	return 0;
}
