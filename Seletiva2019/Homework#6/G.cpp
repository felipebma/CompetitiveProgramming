#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int best(unordered_map<int,int> &m, int n){
	if(m.count(n)) return m[n];
	if(n<12){
		m[n]=n;
		return n;
	}
	m[n] = max(n,(best(m,n/2)+best(m,n/3)+best(m,n/4)));
	return m[n];
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	unordered_map<int,int> m;
	int n;
	while(cin >> n){
		cout << best(m,n) << endl;
	}
	return 0;
}

