#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases, n, dist,gas, dest, ini;
	cin >> nCases;
	while(nCases--){
		int res=0;
		cin >> n;
		priority_queue<int> heap;
		vector<pair<int,int>> arr;
		for (int i = 0; i < n; i += 1){
			cin >> dist >> gas;
			arr.push_back(make_pair(dist,gas));
		}
		sort(arr.begin(),arr.end());
		cin >> dest >> ini;
		for(int i=0;i<n;i++){
			arr[i].first=dest-arr[i].first;
		}
		for (int i = n-1; i >= 0; i--){
			if(ini>=arr[i].first){
				heap.push(arr[i].second);
			}else{
				while(!heap.empty() && ini<arr[i].first && ini<dest){
					ini +=heap.top();
					res++;
					heap.pop();
				}
				if(ini>=arr[i].first){
					heap.push(arr[i].second);
				}
			}
		}
		while(!heap.empty() && ini<dest){
					ini +=heap.top();
					res++;
					heap.pop();
		}
		if(ini<dest){
			cout << -1 << endl;
		}else{
			cout << res << endl;
		}
		
	}
	return 0;
}