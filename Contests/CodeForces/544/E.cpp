#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
using namespace std;
 
int lim = 1e9+3; 

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, k, aux,max=0,cont=0;
	priority_queue<pair<int,pair<int,int>>> heap;
	cin >> n >> k;
	if(n<=k){
		cout << n << endl;
		return 0;
	}
	vector<int> arr;
	vector<bool> used(n,false);
	for(int i=0;i<n;i++){
		cin >> aux;
		arr.pb(aux);
	}
	sort(arr.begin(),arr.end());
	int l=0,r=0;
	while(r<n){
		if(arr[r]-arr[l]>5){
			l++;
		}else{
			while(arr[r]-arr[l]<=5 && r<n) r++;
			r--;
			heap.push(mp(r-l+1,mp(l,r)));
			r++;
		}
	}
	pair<int,pair<int,int>> p;
	while(!heap.empty() && k>0){
		p=heap.top();
		heap.pop();
		l=p.second.first;
		r=p.second.second;
		if(!used[l]&&!used[r]){
			for(int i=l;i<=r;i++) used[i]=true;
			k--;
		}else{
			while(used[l] && l<=r) l++;
			while(used[r] && r>=l) r--;
			if(r>=l){
				heap.push(mp(r-l+1,mp(l,r)));
			}
		}
	}
	for(auto b:used){
		max += (b)?1:0;
	}
	cout << max << endl;
}
