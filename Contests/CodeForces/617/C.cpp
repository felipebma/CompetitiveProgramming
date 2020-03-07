#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
using namespace std;
 
void solve(){
	int n, best = 1e9;
	cin >> n;
	string s;
	cin >> s;
	map<pair<int,int>,int> m;
	pair<int,int> pos = mp(0,0), bestPair;
	for(int i=0;i<n;i++){
		m[pos] = i;
		if(s[i]=='L'){
			pos.first--;
		}else if(s[i]=='R'){
			pos.first++;
		}else if(s[i]=='U'){
			pos.second++;
		}else if(s[i]=='D'){
			pos.second--;
		}
		if(m.count(pos)){
			int aux = i-m[pos];
			if(aux<best){
				best=aux;
				bestPair = mp(m[pos],i);
			}
		}
	}
	if(best==1e9){
		cout << -1 << endl;
	}else{
		cout << bestPair.first+1 << " " << bestPair.second+1 << endl;
	}
} 

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases;
	cin >> nCases;
	while(nCases--){
		solve();	
	}
	return 0;
}
