#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int best;
map<int,vector<int>> map;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, t, aux;
	while(cin >> t >>n){
		vector<int> cds;
		best=0;
		while(n--){
			cin >> aux;
			cds.push_back(aux);
		}
		getBest(cds,0,0);
	}
	return 0;
}

boolean getBest(vector<int> cds, int pos, int sum){
	
}
