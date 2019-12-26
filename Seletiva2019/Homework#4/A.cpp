#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n,edges,a,b, node,color;
	while(cin >> n){
		if(n==0) break;
		cin >> edges;
		vector<vector<int>> graph;
		graph.resize(n);
		vector<int> colors;
		for(int i=0;i<n;i++) colors.push_back(2);
		bool res=true;	
		while(edges--){
			cin >> a >> b;
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
		stack<pair<int,int>> stack;
		stack.push(make_pair(0,1));
		while(!stack.empty() && res){
			node = stack.top().first;
			color = stack.top().second;
			stack.pop();
			if(colors[node]==2){
				colors[node]=color;
				for(int i:graph[node]){
					if(colors[i]==color){
						res=false;
						break;
					}
					stack.push(make_pair(i,(color+1)%2));
				}
			}else if(colors[node]!=color)res=false;
		}
		
		if(!res) cout << "NOT ";
		cout << "BICOLORABLE." << endl;
	}
	
	return 0;
}
