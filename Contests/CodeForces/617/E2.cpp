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
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> ans(n);
	vector<char> tops;
	for(int i=0;i<n;i++){
		char c = s[i];
		int pos = -1;
		for(int j=0;j<tops.size();j++){
			if(tops[j]<=c){
				if(pos == -1 || tops[j]>tops[pos]) pos=j;
			}
		}
		if(pos==-1){
			tops.pb(c);
			ans[i] = tops.size();
		}else{
			tops[pos] = c;
			ans[i] = pos+1;
		}
	}
	cout << tops.size() << endl;
	for(int i:ans) cout << i << " ";
	return 0;
}
