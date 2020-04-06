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
	string num, a ="" , b="";
	cin >> n >> num;
	bool one = false;
	for(int i=0;i<n;i++){
		if(num[i]=='1'){
			if(one){
				a+="0";
				b+="1";
			}else{
				a+="1";
				b+="0";
				one = true;
			}
		}else if(num[i]=='2'){
			if(one){
				a+="0";
				b+="2";
			}else{
				a+="1";
				b+="1";
			}
		}else{
			a+="0";
			b+="0";
		}
	}
	cout << a << endl << b << endl;
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
