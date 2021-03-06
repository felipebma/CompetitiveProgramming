#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	priority_queue<int,vector<int>,greater<int>> heap;
	int n,m,a,b;
	cin >> n >> m;
	vector<set<int>> graph(n+1);
	vector<bool> v(n+1);
	fill(v.begin(),v.end(),false);
	while(m--){
		cin >> a >> b;
		graph[a].insert(b);
		graph[b].insert(a);
	}
	heap.push(1);
	while(!heap.empty()){
		a=heap.top();
		heap.pop();
		if(v[a]) continue;
		v[a]=true;
		cout << a << " ";
		for(auto i: graph[a]){
			if(!v[i]){
				heap.push(i);
			}
		}
	}
	return 0;
}
