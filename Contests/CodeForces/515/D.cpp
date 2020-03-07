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
	int n,m,k;
	cin >> n >> m >> k;
	vector<int> arr(n);
	for(int i =0;i<n;i++){
		cin >> arr[n-i-1];
	}
	int cap = k, actual=0,ans=0;
	for(int i=0;i<n && actual<m;i++){
		cap-=arr[i];
		if(cap>=0){
			ans++;
		}else{
			actual++;
			i--;
			cap=k;
		}
	}
	cout << ans << endl;
	return 0;
}
