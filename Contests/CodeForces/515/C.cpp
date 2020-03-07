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
	map<int,int> map;
	int nC, aux,l=-1,r=1;
	string q;
	cin >> nC;
	cin >> q >> aux;
	map[aux] = 0;
	nC--;
	while(nC--){
		cin >> q >> aux;
		if(q=="L"){
			map[aux]=l;
			l--;
		}else if(q=="R"){
			map[aux]=r;
			r++;
		}else if(q=="?"){
			cout << min(abs(map[aux]-l),abs(map[aux]-r))-1 << endl;
		}
	}
	return 0;
}
