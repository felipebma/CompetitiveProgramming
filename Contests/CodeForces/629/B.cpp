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
	int n,k;
	cin >> n >> k;
	string str = "";
	for(int i=0;i<n-2;i++) str+="a";
	str+="bb";
	int max = 1, aux=0, pos1=n-2,pos2=n-1;
	k--;
	while(k){
		if(k>=pos2-pos1){
			k-=pos2-pos1;
			pos1--;
		}else{
			pos2-=k;
			k=0;
		}
	}
	char c = str[pos1];
	str[pos1] = 'b';
	str[n-2] = c;
	c = str[pos2];
	str[pos2] = 'b';
	str[n-1] = c;
	cout << str << endl;
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
