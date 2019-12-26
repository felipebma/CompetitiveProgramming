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
vector<pair<bool,int>> sieve(ms,{true,0});

void make_sieve(){
	sieve[1] = {false,0};
	for(int i=2;i<ms;i++){
		if(sieve[i].first){
			sieve[i].second=1;
			int aux = 2*i;
			while(aux<ms){
				sieve[aux].first=false;
				sieve[aux].second++;
				aux+=i;
			}
		}
	}
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	make_sieve();
	int nCases, a, b, n, cont;
	vector<vector<int>> dp;
	dp.assign(11,vector<int>(ms,0));
	for(int i=0;i<=10;i++){
		dp[i][0] = i==0;
		for(int j=1;j<ms;j++){
			dp[i][j]=dp[i][j-1];
			if(sieve[j].second==i)dp[i][j]++;
		}
	}
	cin >> nCases;
	while(nCases--){
		cin >> a >> b >> n;
		cout << (dp[n][b]-dp[n][a-1]) << endl;
	}
	return 0;
}
