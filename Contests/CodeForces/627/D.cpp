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
	int n,aux;
	cin >> n;
	vector<int> interest(n);
	for(int i=0;i<n;i++){
		cin >> interest[i];
	}
	for(int i=0;i<n;i++){
		cin >> aux;
		interest[i] -= aux;
	}
	sort(interest.begin(),interest.end());
	int ans=0,zero=(upper_bound(interest.begin(),interest.end(),0)-interest.begin());
	if(zero==n){
	 	ans = 0;
	}else{
		for(int i=0;i<zero;i++){
			ans += n-(upper_bound(interest.begin(),interest.end(),-interest[i])-interest.begin());
		}
		ans+= (n-zero)*(n-zero-1)/2;
	}
	cout << ans << endl;
	return 0;
}
