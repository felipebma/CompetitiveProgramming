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
	int n, aux, gamb=0;
	cin >> n;
	vector<int> a,b;
	map<pair<int,int>,int> map;
	for (int i = 0; i < n; i += 1){
		cin >> aux;
		a.pb(aux);
	}
	for (int i = 0; i < n; i += 1){
		cin >> aux;
		b.pb(aux);
	}
	int num,den,gcd;
	for(int i=0;i<n;i++){
		if(b[i]==0){
			if(a[i]==0){
				gamb++;
			}else{
				map[mp(0,1)]++;
			}
		}else if(a[i]!=0){
			gcd = __gcd(b[i], a[i]);
			b[i]/=gcd;
			a[i]/=gcd;
			if(b[i]<0){
				a[i]*=-1;
				b[i]*=-1;
			}
			map[mp(b[i],a[i])]++;
		}
		
	}
	int max=0;
	for(auto p:map){
		if(p.second>max) max = p.second;
	}
	
	cout << (max+gamb) << endl;
	return 0;
}



