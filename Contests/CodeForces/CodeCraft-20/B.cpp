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
	int n;
	cin >> n;
	string s;
	cin >> s;
	int pos=0;
	string ans = s;
	for(int i=n-1;i>=0;i--){
			string aux = "";
			for(int j=i;j<n;j++){
				aux.pb(s[j]);
			}
			if((n-i)%2==1){
				for(int j=i-1;j>=0;j--){
					aux.pb(s[j]);
				}
			}else{
				for(int j=0;j<i;j++){
					aux.pb(s[j]);
				}
			}			
			if(aux<=ans){
				ans = aux;
				pos = i;
			}
		
		
	}
	
	cout << ans << endl <<  pos+1 << endl;
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
