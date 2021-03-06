#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int maxOx, w, nTreasures, ox, t;
	bool ini = true;
	while(cin>> maxOx >> w >> nTreasures){
		if(!ini){
			cout << endl;
		}
		ini = false;
		vector<pair<int,int>> treasures;
		vector<vector<pair<int,int>>> dp;
		dp.assign(nTreasures+1, vector<pair<int,int>>(maxOx+1, {0,-1}));
		for(int i=1;i<=nTreasures;i++){
			cin >> ox >> t;
			treasures.push_back({ox*3*w,t});
		}
		for(int i=1;i<=nTreasures;i++){
			ox = treasures[i-1].first;
			t = treasures[i-1].second;
			for(int j=0;j<=maxOx;j++){
				pair<int,int> aux = dp[i-1][j];
				if(j>=ox && (dp[i-1][j].first < dp[i-1][j-ox].first+t)){
					dp[i][j] = {dp[i-1][j-ox].first+t,i-1};
				}else{
					dp[i][j]=aux;
				}
			}
		}
		pair<int, int> aux =  dp[nTreasures][maxOx];
		int posJ = maxOx, posI = nTreasures, cont=0;
		cout <<aux.first << endl;
		stack<pair<int,int>> stack;
		while(aux.second != -1){
			posJ -= treasures[aux.second].first;
			posI = aux.second;
			stack.push(treasures[aux.second]);				
			aux = dp[posI][posJ];	
			cont++;
		}
		cout << cont << endl;
		while(!stack.empty()){
			cout << stack.top().first/(3*w) << " " << stack.top().second << endl;
			stack.pop(); 
		}
		
	}
	return 0;
}
