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
	int nCases;
	cin >> nCases;
	while(nCases--){
		int h,m, ans=0;
		cin >> h >> m;
		if(h==0 && m==0){
			cout << 0 << endl;
			return 0;
		}
		ans += (23-h)*60;
		ans+=(60-m);
		cout << ans << endl;
	}
	return 0;
}
