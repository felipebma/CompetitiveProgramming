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
	int h1, m1, h2, m2, t=0;
	string t1,t2;
	cin >> t1 >> t2;
	h1 = stoi(t1.substr(0,2));
	m1 = stoi(t1.substr(3,2));
	h2 = stoi(t2.substr(0,2));
	m2 = stoi(t2.substr(3,2));
	t+=(h2-h1)*60;
	t+=m2-m1;
	t/=2;
	m1+=t;
	h1+=m1/60;
	m1%=60;
	printf("%02lld:%02lld",h1,m1);
	return 0;
}
