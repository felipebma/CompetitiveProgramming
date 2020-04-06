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
	int n, q;
	string s;
	cin >> n >> s >> q;
	vector<vector<int>> arr(n,vector<int>(26,0));
	arr[0][s[0]-'a']++;
	for(int i=1;i<n;i++){
		for(int j=0;j<26;j++) arr[i][j] = arr[i-1][j];
		arr[i][s[i]-'a']++;
	}
	int a,b;
	char c;
	while(q--){
		cin >> a >> b >> c;
		if(a==1){
			arr[b][s[b]-'a']--;
			s[b] = c;
		}else{
			
		}
	}
	return 0;
}
