#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, k, beg,end;
	cin >> n >> k;
	vector<vector<int>> line(3e5);
	vector<pair<int,int>> segs(n+1);
	priority_queue<pair<int,int>> heap;
	for(int i=1;i<=n;i++){
		cin >> beg >> end;
		segs[i]=(make_pair(beg,end));
		line[beg].pb(i);
		line[end+1].pb(i);
	}
	int cont=0;
	unordered_set<int> ans, use;
	for(auto v:line){
		for(auto i:v){
			if(use.count(i)){
				use.erase(i);
				if(!ans.count(i))	cont--;	
			}else{
				use.insert(i);
				heap.push(make_pair(segs[i].second,i));
				cont++;
			}
		}
		while(cont>k){
			if(use.count(heap.top().second)){
				ans.insert(heap.top().second);
				cont--;
			}
			heap.pop();
		}
	}
	cout << ans.size() << endl;
	for(auto i:ans){
		cout << i << " ";
	}
	return 0;
}