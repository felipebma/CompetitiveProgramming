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
	int n, last, val=1, num,first;
	cin >> n >> first;
	last = first;
	vector<int> ans(n);
	ans[0] = val;
	bool allEqual = true, twoEqual = false;
	for(int i=1;i<n;i++){
		val = (val%2)+1;
		cin >> num;
		if(num==last){
			if(!twoEqual){
				val = (val%2)+1;
			}
			twoEqual = true;
		}else{
			allEqual = false;
		}
		ans[i] = val;
		last = num;
	}
	if(allEqual){
		cout << 1 << endl;
		while(n--) cout << "1 ";
		cout << endl;
		return;
	}else if(n%2==0 || twoEqual){
		cout << 2 << endl;
		if(twoEqual && first!=last && n%2==0){
			int pos = 0;
			while(ans[pos]!=ans[pos+1]){
				ans[pos] = (ans[pos]%2)+1;
				pos++;
			}
			ans[pos] = (ans[pos]%2)+1;
		}
	}else{
		if(last!=first){
			cout << 3 << endl;
			ans[n-1]=3;
		}else{
			cout << 2 << endl;
		}
	}
	for(int i=0;i<n;i++) cout << ans[i] << " ";
	cout << endl;
	
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
