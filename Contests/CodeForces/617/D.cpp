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
	int n, a, b, k,h, aux;
	cin >> n >> a >> b >> k;
	vector<int> need;
	while(n--){
		cin >> h;
		aux = h%(a+b);
		if (aux==0) aux = a+b;
		if(aux%a==0){
			need.pb((aux/a)-1);
		}else{
			need.pb(aux/a);
		}
	}
	sort(need.begin(),need.end());
	for(int i=0;i<need.size();i++){
		k-=need[i];
		if(k<0){
			cout << i;
			return 0;
		}
	}
	cout << need.size();
	return 0;
}
