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
	int n,aux,l,r;
	bool found=false;
	cin >> n;
	vector<int> arr(n);
	cin >> aux;
	arr[0]=aux;
	for (int i = 1; i < n; i += 1)
	{
		cin >> aux;
		arr[i]=aux;
		if(abs(arr[i]-arr[i-1])>1){
			found = true;
			l=i;
			r=i+1;
		}
		
	}
	if(found){
		cout << "YES" << endl << l << " " << r << endl;
	}else{
		cout << "NO" << endl;
	}
	
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
