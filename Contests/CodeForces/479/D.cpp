#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

map<int,vector<int>> graph;
map<int,int> indice;
vector<bool> visited;
int n;
vector<int> lista;

vector<int> dfs(int i, int size){
	lista.pb(i);
	visited[indice[i]]==true;
	vector<int> ans;
	if(size==n){
		for(int j:lista) ans.pb(j);
		return ans;
	}
	for(int j:graph[i]){
		if(!visited[indice[j]]){
			ans = dfs(j,size+1);
			if(ans.size()>0) return ans;
		}
	}
	lista.pop_back();
	visited[indice[i]]=false;
	return ans;
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	vector<int> ans;
	int aux;
	cin >> n;
	set<int> nodes;
	visited.assign(n,false);
	for(int i=0;i<n;i++){
		cin >> aux;
		indice[aux] = i;
		nodes.insert(aux);
	}
	for(auto i:nodes){
		if(i%3==0 && nodes.count(i/3)){
			graph[i].pb(i/3);
		}
		if(nodes.count(i*2)){
			graph[i].pb(i*2);
		}
	}
	
	for(auto i:nodes){
		ans = dfs(i,1);
		if(ans.size()>0){
			for(int j:ans){
				printf("%lld ",j);
			}
			printf("\n");
			break;
		}
	}
	
	return 0;
}
