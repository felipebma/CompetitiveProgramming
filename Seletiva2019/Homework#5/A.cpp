#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int costCycle(vector<set<pair<int,int>>> &graph, vector<bool> &v, int pos, int cost, int n){
	if(n==graph.size()){
		for(auto p:graph[pos]){
			if(p.second==0) return min(2*cost,cost+p.first);
		}
		return 2*cost;
	} 
	v[pos]=true;
	for(auto p:graph[pos]){
		if(!v[p.second]){
			int c = costCycle(graph,v,p.second,(cost+p.first),n+1);
			if(c>-1)return c;
		}
	}
	
	v[pos]=false;
	return -1;
}


int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n,m, a, b, d;
	cin >> n >> m;
	vector<set<pair<int,int>>> graph(n);
	vector<bool> v(n);
	
	if(m<n-1){
		 cout << -1 << endl;
		 return 0;
	}
	while(m--){
		cin >> a >> b >> d;
		graph[a-1].insert(make_pair(d,b-1));
		
	}
	cout << (costCycle(graph,v,0,0,1)) << endl;
	return 0;
}
