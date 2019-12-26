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
	int nCases;
	cin >> nCases;
	while(nCases--){
		int n,x;
		cin >> n;
		vector<int> arr, sol;
		sol.assign(n+1,0);
		arr.push_back(0);
		while(n--){
			cin >> x;
			arr.push_back(x);
		}
		int cont=0;
		for(int i=1;i<arr.size();i++){
			if(sol[i]==0){
				cont=1;
				x=arr[i];
				unordered_set<int> set;
				set.insert(i);
				while(x!=i){
					cont++;
					set.insert(x);
					x=arr[x];
				}
				for(auto n:set){
					sol[n]=cont;
				}
			}
		}
		
		cout << sol[1];
		for(int i=2;i<sol.size();i++){
			cout << " " << sol[i];
		}
		cout << endl;
	}
	return 0;
}
