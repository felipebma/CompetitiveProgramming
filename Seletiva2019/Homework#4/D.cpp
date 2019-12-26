#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	vector<vector<int>> graph;
	vector<boolean> visited;
	int v , e;
	cin >> v >> e;
	graph.resize(v+1);
	visited.resize(v+1);
	int a,b
	while(e--){
		cin >> a >> b;
		graph[a].push_back(b);
	} 
	for (int i = 0; i <= v; i += 1){
		stack<int> stack;
		if(!visited[i]){
			
		}
	}
	return 0;
}
