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
	int n,r,aux;
	cin >> n >> r;
	vector<int> arr;
	for(int i=0;i<n;i++){
		cin>> aux;
		if(aux==1) arr.pb(i);
	}
	int l=-1,i=0,last=-1, ans=0;
	while(l<n){
		while(i<arr.size() && arr[i]-r<=l) i++;
		if(i==last+1){
			cout << -1 << endl;
			return 0;
		}
		ans++;
		last=i-1;
		l=arr[i-1]+r-1;
		if(arr[last]+r>=n) break;
	}	
	cout << ans << endl;
	return 0;
}