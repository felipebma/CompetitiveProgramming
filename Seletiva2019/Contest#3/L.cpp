#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n,m,k,a,b;
	cin >> n >> m >> k;
	vector<set<int>> graph(n+1);
	while(m--){
		cin >> a >> b;
		graph[a].insert(b);
	}
	
	int res =INT_MAX;
	int cont;
	for(int i=1;i<=n;i++){
		stack<int> s;
		vector<bool> v(n+1);
		fill(v.begin(),v.end(),false);
		s.push(i);
		cont=0;
		while(!s.empty()){
			a = s.top();
			s.pop();
			v[a]=true;
			cont++;
			for(auto i:graph[a]){
				if(!v[i]) s.push(i);
			}
		}
		res = min(res,cont);
	}
	cout << res*k << endl;
	return 0;
}
