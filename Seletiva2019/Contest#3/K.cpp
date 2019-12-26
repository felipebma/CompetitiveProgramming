#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	map<int,int> m;
	int n, aux, res=0;
	cin >> n;
	while(n--){
		cin >> aux;
		m[aux]++;
	}
	for(auto i:m){
		res=max(res,i.second);
	}
	cout << res;
	return 0;
}
