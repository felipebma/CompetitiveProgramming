#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, m, a, b;
	cin >> n >> m;
	vector<set<int>> graph(n+1), g(2);
	vector<bool> v(n+1);
	fill(v.begin(),v.end(),false);
	while(m--){
		cin >> a >> b;
		graph[a].insert(b);
		graph[b].insert(a);
	}
	stack<pair<int,int>> s;
	for (int i = 1; i <= n; i += 1){
		if(v[i])continue;
		s.push(make_pair(i,0));
		while(!s.empty()){
			a= s.top().first;
			b= s.top().second;
			g[b].insert(a);
			v[a] = true;
			s.pop();
			if(g[(b+1)%2].count(a)){
				cout << -1 << endl;
				return 0;
			}
			for(auto i:graph[a]){
				if(g[b].count(i)){
					cout << -1 << endl;
					return 0;
				}
				if(!v[i]) s.push(make_pair(i,(b+1)%2));
			}
		}
		
	}
	cout << g[0].size() << endl;
		for(auto i:g[0]){
			cout << i << " ";
		}
		cout << endl << g[1].size() << endl;
		for(auto i:g[1]){
			cout << i << " ";
		}
	return 0;
}
