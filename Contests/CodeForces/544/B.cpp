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
	int n,k, cont=0, aux;
	map<int,int> map;
	cin >> n >> k;
	while(n--){
		cin >> aux;
		aux%=k;
		if(map.count(aux)&&map[aux]>0){
			cont++;
			map[aux]--;	
		}else{
			map[(k-aux)%k]++;
		}
	}
	cout << (2*cont) << endl;
	return 0;
}
