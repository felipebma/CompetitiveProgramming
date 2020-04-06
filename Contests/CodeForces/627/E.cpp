#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
using namespace std;

vector<int> arr; 

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, h, l, r, aux, sum=0;
	cin >> n >> h >> l >> r;
	while(n--){
		cin >> aux;
		arr.pb(aux%h);
	}
	
	return 0;
}
