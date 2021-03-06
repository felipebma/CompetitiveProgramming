#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

vector<int> sieve;

int make_sieve(int n){
	n+=2;
	sieve.assign(n,0);
	for(int i=2;i<n;i++){
		if(sieve[i]==0){
			sieve[i]=1;
			for(int j=2*i;j<n;j+=i){
				sieve[j]=2;
			}
		}
	}
	return (n>4)?2:1;
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, colors;
	cin >> n;
	cout <<  make_sieve(n) << endl << sieve[2];
	for(int i=3;i<n+2;i++){
		cout << " " << sieve[i];
	}
	return 0;
}
