#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

int gcd(int a, int b){
	int min=min(a,b), max=max(a,b);
	if(min<=0) return -1;
	if(max%min==0) return min;
	return gcd(min,max%min);
	
}


vector<int> solve(int n, int p, int w, int d){
	if(p==0){
		return {0,0,n};
	}
	if(w==0){
		if(d==0){
			return {-1};
		}
		if(p%d==0){
			return {0,(p/d),0};
		}
		return {-1};
	}
	if(d==0){
		if(p%w==0){
			return {(p/d),0,0};
		}
		return {-1};
	}
	int mdc = gcd((w,d));
	if(p%mdc!=0) return {-1};
	p/=mdc;
	w/=mdc;
	d/=mdc;
	
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, p, w, d, vit=0,der=0,emp=0;
	cin >> n >> p >> w >> d;
	vector<int> sol = solve(n,p,w,d);
	if(sol[0]==-1){
		cout << -1 << endl;
		return 0;
	}else{
		cout < sol[0] << " "<< sol[1] << " " << sol[2] << endl;
	}
	return 0;
}
