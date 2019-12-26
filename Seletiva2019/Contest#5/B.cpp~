#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases, m, c, qtd, p;
	cin >> nCases;
	vector<vector<int>> dp;
	while(nCases--){
		cin >> m >> c;
		dp.assign(c+1,vector<int>(m+1,INT_MIN));
		dp[0][0]=0;
		for(int i=1;i<=c;i++){
			cin >> qtd;
			while(qtd--){
				cin >> p;
				for(int j=p;j<m+1;j++){
					dp[i][j] = max(dp[i-1][j-p]+1, dp[i][j]);
				}
			}
		}
		int aux=m;
		while(aux>=0 && dp[c][aux]<c) aux--;
		if(aux<0)	{
			cout << "no solution" << endl;
		}else{
			cout << aux << endl;
		}
	}
	return 0;
}
