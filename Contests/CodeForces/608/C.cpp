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
	int n, sx,sy;
	cin >> n >> sx >> sy;
	int u=0,d=0,l=0,r=0, x,y;
	while(n--){
		cin >> x >> y;
		if(y>sy) u++;
		if(y<sy) d++;
		if(x<sx) l++;
		if(x>sx) r++;
	}
	if(u>=d && u>=l && u>=r){
		cout << u << endl << sx << " " << sy+1 << endl;
	}else if(d>=u && d>=l && d>=r){
		cout << d << endl << sx << " " << sy-1 << endl;
	}else if(l>=d && l>=u && l>=r){
		cout << l << endl << sx-1 << " " << sy << endl;
	}else{
		cout << r << endl << sx+1 << " " << sy << endl;
	}
		
	return 0;
}
