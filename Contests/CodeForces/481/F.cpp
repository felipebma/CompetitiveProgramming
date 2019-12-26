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
	int n,k,aux,a,b;
	cin >> n >> k;
	vector<pair<int,int>> arr;
	for(int i=0;i<n;i++){
		cin >> aux;
		arr.pb(mp(aux,i));
	}
	vector<int> quarrel(n,0), ans(n,0);
	for(int i=0;i<k;i++){
		cin >> a >> b;
		a--;
		b--;
		if(arr[a]>arr[b]){
			quarrel[a]++;
		}else if(arr[b]>arr[a]){
			quarrel[b]++;
		}
	}
	sort(arr.begin(),arr.end());
	unordered_map<int,int> map;
	for(int i=0;i<n;i++){
		ans[arr[i].second] = i-quarrel[arr[i].second];
		if(map.count(arr[i].first)){
			ans[arr[i].second]-=map[arr[i].first];
		}
		map[arr[i].first]++;
	}
	for(int i:ans){
		cout << ((i>0)?i:0) << " ";
	}
	cout << endl;
	return 0;
}
