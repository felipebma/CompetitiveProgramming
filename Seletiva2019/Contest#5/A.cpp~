#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	vector<vector<pair<int,int>>> dp;
	int n, s, e, m, x, y, min, k;
	while(cin >> n >> s >> e >> m){
		dp.assign(n+1,vector<pair<int,int>>(n+1,make_pair(INT_MAX,INT_MAX)));
		dp[0][s] = make_pair(0,0);
		unordered_map<int,vector<pair<int,int>>> eco, com;
		while(m--){
			cin >> x >> y >> min;
			eco[y].push_back(make_pair(x,min));
		}
		cin >> k;
		while(k--){
			cin >> x >> y >> min;
			com[y].push_back(make_pair(x,min));
		}
		for(int i=1;i<n+1;i++){
			for(int j=1;j=n+1;j++){
				for(auto p:eco[j]){
					dp[i][j][0] = min(dp[i-1][p.first][0]+p.second,dp[i-1][j][0]);
					dp[i][j][1] = min(dp[i-1][p.first][1]+p.second,dp[i-1][j][1]);
				}
				for(auto p:com[j]){
					dp[i][j][0] = dp[i-1][p.first][1]+p.second;
				}				
			}
		}
		
	}
	return 0;
}
