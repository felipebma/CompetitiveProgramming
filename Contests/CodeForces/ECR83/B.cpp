#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
using namespace std;
 
void solve(){
	int n,aux;
	vector<int> arr;
	cin >> n;
	while(n--){
		cin >> aux;
		arr.pb(aux);
	}
	sort(arr.begin(),arr.end());
	reverse(arr.begin(),arr.end());
	for(int i:arr) cout << i << " ";
	cout << endl;
	
} 

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases;
	cin >> nCases;
	while(nCases--){
		solve();	
	}
	return 0;
}
