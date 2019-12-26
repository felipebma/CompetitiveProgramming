#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	map<string,int> map;
	int n;
	cin >> n;
	string s;
	cin >> s;
	for(int i=0;i<n-1;i++){
		map[(string(1,s[i])+string(1,s[i+1]))]+=1;
	}
	int best=-1;
	string ans;
	for(auto p:map){
		if(p.second>best){
			ans = p.first;
			best=p.second;
		}
	}
	cout << ans << endl;
	return 0;
}
