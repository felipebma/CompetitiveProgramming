#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases;
	cin >> nCases;
	while(nCases--){
		vector<pair<int,int>> table;
		vector<int> initialPos;
		vector<vector<int>> victories;
		int n, k, s;
		cin >> n >> k;
		for (int i = 0; i < pow(2,n); i += 1){
			cin>> s;
			initialPos.push_back(i);
			table.push_back(make_pair(s,s));
			victories.push_back(vector<int>());
		}	
		for(int i=n;i>0;i--){
			for (int j = 0; j < pow(2,i); j += 2){
				if(table[j].first>=table[j+1].first){
					table[j/2].first = min(table[j].first-table[j+1].first+k,table[j].second);
					table[j/2].second=table[j].second;	
					initialPos[j/2]=initialPos[j];
					victories[j/2]=victories[j];
					victories[j/2].push_back(initialPos[j+1]);
				}else{
					table[j/2].first = min(table[j+1].first-table[j].first+k,table[j+1].second);
					table[j/2].second=table[j+1].second;
					victories[j/2]=victories[j+1];
					victories[j/2].push_back(initialPos[j]);	
					initialPos[j/2]=initialPos[j+1];
				}
			}
		}
		cout << initialPos[0]+1 << endl;
		cout << victories[0][0]+1;
		for(int i=1;i<victories[0].size();i++){
			cout << " " << victories[0][i]+1;
		}
		cout << endl;
	}
	
	return 0;
}
