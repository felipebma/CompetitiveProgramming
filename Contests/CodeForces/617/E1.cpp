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
	char top0='a', top1='a';
	for(int i=0;i<n;i++){
		if(top0>=top1){
			if(s[i]>=top0){
				top0=s[i];
				ans[i]=0;
			}else if(s[i]>=top1){
				top1=s[i];
				ans[i]=1;
			}else{
				cout << "NO" << endl;
				return 0;
			}
		}else{
			if(s[i]>=top1){
				top1=s[i];
				ans[i]=1;
			}else if(s[i]>=top0){
				top0=s[i];
				ans[i]=0;
			}else{
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	cout << "YES" << endl;
	for(int i:ans) cout << i;
	return 0;
}
