#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases, n, a;
	cin >> nCases;
	vector<vector<int>> dp;
	dp.assign(13, vector<int>(99,0));
	dp[1][0] = 1;
	for(int i=1;i<12;i++){
		for(int j=0;j<99 && dp[i][j]>0;j++){
			for(int k=j;k<=j+i && k<99;k++){
				dp[i+1][k] += dp[i][j];
			}
		}
	}
	while(nCases--){
		cin >> n >> a;
		cout << dp[n][a] << endl;
	}
	return 0;
}
