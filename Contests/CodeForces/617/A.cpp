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
	int n, aux;
	cin >> n;
	bool odd=false, even=false;
	for(int i=0;i<n;i++){
		cin >> aux;
		if(aux%2==0){
			even=true;
		}else{
			odd=true;
		}
	}
	
		if((n%2==0 && odd && even) || (n%2==1 && odd)){
			cout << "YES" << endl;
		}else cout << "NO" << endl;
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
