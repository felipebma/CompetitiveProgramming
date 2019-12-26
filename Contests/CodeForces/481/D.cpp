#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, aux;
	cin >> n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		cin >> aux;
		arr.pb(aux);
	}
	unordered_map<int,pair<int,int>> map;
	int best = 1e9;
	map[arr[1]-arr[0]] = mp(arr[1],0);
	map[arr[1]+1-arr[0]] = mp(arr[1]+1,1);
	map[arr[1]-1-arr[0]] = mp(arr[1]-1,1);
	for(int i=2;i<n;i++){
		for(auto p:map){
			if(arr[i]+1-p.second.first == p.first){
				map[p.first].first = arr[i]+1;
				map[p.first].second++;
				cout << "Entrou 1" << endl;
			}else if(arr[i]-1-p.second.first == p.first){
				map[p.first].first = arr[i]-1;
				map[p.first].second++;
				cout << "Entrou 2" << endl;
			}else if(arr[i]-1-p.second.first == p.first){
				map[p.first].first = arr[i];
				cout << "Entrou 3" << endl;
			}else{
				cout << "Entrou 1" << endl;
				map.erase(p.first);
				cout << map[p.first].first;
			}
		}
	}
	for(auto p:map){
		if(p.second.second<best) best = p.second.second;
		cout << p.first << " " << p.second.first << endl;
		map.erase(p.first);
	}
	map[arr[1]-arr[0]+1] = mp(arr[1],1);
	map[arr[1]+1-arr[0]+1] = mp(arr[1]+1,2);
	map[arr[1]-1-arr[0]+1] = mp(arr[1]-1,2);
	for(int i=2;i<n;i++){
		for(auto p:map){
			if(arr[i]+1-p.second.first == p.first){
				map[p.first].first = arr[i]+1;
				map[p.first].second++;
			}else if(arr[i]-1-p.second.first == p.first){
				map[p.first].first = arr[i]-1;
				map[p.first].second++;
			}else if(arr[i]-1-p.second.first == p.first){
				map[p.first].first = arr[i];
			}else{
				map.erase(p.first);
			}
		}
	}
	for(auto p:map){
		if(p.second.second<best) best = p.second.second;
		map.erase(p.first);
	}
	map[arr[1]-arr[0]-1] = mp(arr[1],1);
	map[arr[1]+1-arr[0]-1] = mp(arr[1]+1,2);
	map[arr[1]-1-arr[0]-1] = mp(arr[1]-1,2);
	for(int i=2;i<n;i++){
		for(auto p:map){
			if(arr[i]+1-p.second.first == p.first){
				map[p.first].first = arr[i]+1;
				map[p.first].second++;
			}else if(arr[i]-1-p.second.first == p.first){
				map[p.first].first = arr[i]-1;
				map[p.first].second++;
			}else if(arr[i]-1-p.second.first == p.first){
				map[p.first].first = arr[i];
			}else{
				map.erase(p.first);
			}
		}
	}
	for(auto p:map){
		if(p.second.second<best) best = p.second.second;
		map.erase(p.first);
	}
	cout << best << endl;
	return 0;
}
