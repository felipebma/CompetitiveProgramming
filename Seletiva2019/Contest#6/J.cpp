#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
#define next second.second
#define previous second.first

using namespace std;

priority_queue<pair<int,int>> heap;
vector<pair<int,pair<int,int>>> arr;


int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, k, a;
	pair<int,int> aux_pair;
	cin >> n >> k;
	vector<int> ans(n,0);
	for(int i=0;i<n;i++){
		cin >> a;
		arr.push_back(make_pair(a,make_pair((i-1),(i+1))));
		heap.push(make_pair(a,i));
	}
	arr[n-1].next=-1;
	int prox, ant, id, turn=2;
	while(!heap.empty()){
		turn%=2;
		turn++;
		do{
			aux_pair = heap.top();
			id = aux_pair.second;
			heap.pop();
		}while(ans[id]!=0 && !heap.empty());
		if(ans[id]!=0) break;
		prox = arr[id].next;
		ant = arr[id].previous;
		ans[id]=turn;
		int aux_id=arr[id].previous;
		for(int i=0;i<k && aux_id>-1 ;i++){
			ans[aux_id]=turn;
			aux_id=arr[aux_id].previous;
		}
		arr[id].previous = aux_id;
		aux_id=arr[id].next;
		for(int i=0;i<k && aux_id>-1 ;i++){
			ans[aux_id]=turn;
			aux_id=arr[aux_id].next;
		}
		arr[id].next = aux_id;
		if(arr[id].next>-1) arr[arr[id].next].previous = arr[id].previous;
		if(arr[id].previous>-1) arr[arr[id].previous].next = arr[id].next;
	}
	
	for(int i:ans) cout << i;
	return 0;
}
