#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

int divisors(int n){
	int root = sqrt(n), ans=1, pot=0;
	while(n%2==0){
		pot++;
		n/=2;
	}
	ans*=pot+1;
	for (int i = 3; i <= root; i += 2){
		pot=0;
		while(n%i==0){
			pot++;
			n/=i;
		}
		ans*=pot+1;
		root = sqrt(n);
	}
	if(n!=1) ans*=2;
	return ans;
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases, l, r, best=0, ans=0, aux;
	cin >> nCases;
	while(nCases--){
		best=0; 
		ans=0;
		cin >> l >> r;
		for (int i = l; i <= r; i += 1){
			aux = divisors(i);
			if(aux>best){
				best = aux;
				ans = i;
			}
		}
		cout << "Between " << l << " and " << r << ", " << ans << " has a maximum of " << best << " divisors." << endl;
	}
	return 0;
}
