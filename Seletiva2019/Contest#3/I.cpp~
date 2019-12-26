#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n,m, aux, a,b;
	ll res=0;
	cin >> n >> m;
	vector<pair<int,int>> prices;
	vector<set<int>> graph(n);
	vector<bool> v(n);
	fill(v.begin(),v.end(),false);
	for (int i = 0; i < n; i += 1){
		cin >> aux;
		prices.push_back(make_pair(aux,i));
	}
	sort(prices.begin(),prices.end());
	for (int i = 0; i < m;i += 1){
		cin >> a >> b;
		graph[a-1].insert(b-1);
		graph[b-1].insert(a-1);
	}
	stack<int> s;
	for (int i = 0; i < n; i += 1){
		if(!v[prices[i].second]){
			res+=prices[i].first;
			s.push(prices[i].second);
			while(!s.empty()){
				aux=s.top();
				s.pop();
				v[aux]=true;
				for(auto i:graph[aux]){
					if(!v[i]) s.push(i);
				}
			}
		}
	}
	cout << res << endl;
	return 0;
}
