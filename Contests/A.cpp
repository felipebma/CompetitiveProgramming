#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
using namespace std;
 
void solve(int nCase){
	int n, total,budget,aux;
	cin >> n >> budget;
	total = n;
	vector<int> prices;
	while(total--){
		cin >> aux;
		prices.pb(aux);
	}
	sort(prices.begin(),prices.end());
	int pos = 0;
	for(;pos<n&&prices[pos]<=budget;pos++) budget-=prices[pos];
	pos = min(n,pos);
	cout << "Case #" << nCase<<": " << pos << endl;
} 

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases;
	cin >> nCases;
	for(int i=1;i<=nCases;i++){
		solve(i);	
	}
	return 0;
}
