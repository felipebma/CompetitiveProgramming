#include <bits/stdc++.h>
#define pb push_back
#define endl '\n'
#define ll long long
#define int ll
const int ms = 1111111;
using namespace std;
vector<int> g[ms];
vector<bool> vis(ms);
int arestas;

int dfs(int u){
	if(vis[u]) return 0;
	arestas+=g[u].size();
	vis[u]=1;
	int cont=0;
	for(int &v : g[u])
		if(vis[v]==0) cont+=1+dfs(v);
		
	return cont;
}




int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int v,e,a,b;
	cin >> v >> e;
	
	while(e--){
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}
	
	for (int i = 1; i <=v; i += 1){
		if(!vis[i]){
			arestas = 0;
			int con = 1+dfs(i);
			//cout<<arestas<<' '<<con<<endl;
			if((con)*(con-1)!=arestas){
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	
	cout<<"YES"<<endl;
	
	
	return 0;
}
