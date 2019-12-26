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
	int n, b=0, w=0;
	cin >> n;
	char c;
	vector<bool> arr;
	for(int i=0;i<n;i++){
		cin >> c;
		if(c=='B'){
			b++;
			arr.pb(true);
		}else{
			w++;
			arr.pb(false);
		}
	}
	if(b==n || w==n){
		cout << 0 << endl;
		return 0;
	}
	vector<int> sol;
	if(b%2==0){
		for(int i=0;i<n-1;i++){
			if(arr[i]){
				sol.pb(i);
				arr[i+1]=!arr[i+1];
			}
		}
	}else if(w%2==0){
		for(int i=0;i<n-1;i++){
			if(!arr[i]){
				sol.pb(i);
				arr[i+1]=!arr[i+1];
			}
		}
	}else{
		cout << -1 << endl;
		return 0;
	}
	
	cout << sol.size() << endl;
	for(auto i:sol){
		cout << i+1 << " ";
	}
	cout << endl;
	
	return 0;
}
