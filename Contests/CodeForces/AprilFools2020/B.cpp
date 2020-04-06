#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
using namespace std;
 
vector<int> primes; 
vector<int> ans;
 
void fillPrimes(int n){
	for(int i=2;i<=n;i++){
		if(primes[i]){
			while(n%i==0){
				ans.pb(i);
				n/=i;
			}
			for(int j=2*i;j<=n;j+=i) primes[j] = false;
		}
	}
} 

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n;
	cin >> n;
	for(int i=0;i<=n;i++) primes.pb(true);
	fillPrimes(n);
	for(int i:ans) cout << i;
	return 0;
}
