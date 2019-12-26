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
	int nCases, n, x;
	cin >> nCases;
	while(nCases--){
		vector<int> arr;
		int ans=1;
		cin >> n;
		while(n--){
			cin >> x;
			arr.push_back(x);
		}
		int atual=1;
		sort(arr.begin(),arr.end());
		for(int i=0;i<arr.size()-1;i++){
			if(arr[i+1]==arr[i]){
				atual++;
			}else{
				atual=1;
			}
			if(arr[i+1]-arr[i]==1){
				ans = max(ans,atual+1);;
			}
			ans = max(ans,atual);
		}
		cout << ans << endl;
	}
	return 0;
}
