#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int size, n, w, c;
	cin >> size >> n;
	vector<vector<int>> dp;
	dp.assign(n+1,vector<int>(size+1,0));
	for (int i = 1; i <= n; i += 1){
		cin >> w >> c;
		for (int j = 0; j < w; j += 1){
			dp[i][j]=dp[i-1][j];
		}
		for (int j = w; j <= size; j += 1){
			dp[i][j] = max(dp[i-1][j],(dp[i-1][j-w]+c));
		}
	}
	cout << dp[n][size];
	return 0;
}
