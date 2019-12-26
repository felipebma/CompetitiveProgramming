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
	int n, c, a, b;
	cin >> n >> c;
	vector<pair<int,int>> ans;
	ans.assign(n,make_pair(0,0));
	vector<int> esc(n), ele(n);
	ans[0] = {0,c};
	for(int i=1;i<ans.size();i++){
		cin >> a;
		esc[i] = a;
	}
	for(int i=1;i<ans.size();i++){
		cin >> b;
		ele[i] = b;
	}
	for(int i=1;i<ans.size();i++){
		ans[i].first = (min(ans[i-1].first,ans[i-1].second)) + esc[i];
		ans[i].second = (min(ans[i-1].first+c,ans[i-1].second)) + ele[i];
	}
	for(auto p:ans){
		cout << (min(p.first,p.second)) << " ";
	}
	return 0;
}
