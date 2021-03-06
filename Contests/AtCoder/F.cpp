#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
using namespace std;
 
vector<int> c;
vector<pair<double,double>> pos;
 
double calc(int i, double x, double y){
	double ans = c[i]*sqrt(pow(x-pos[i].first,2)+pow(y-pos[i].second,2));
	return ans;
} 

double solve(double x, double y, int k){
	vector<double> time;
	for(int i=0;i<c.size();i++){
		time.pb(calc(i,x,y));
	}
	sort(time.begin(),time.end());
	return time[k-1];
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, k, x,y;
	cin >> n >> k;
	c.assign(n,0);
	pos.assign(n,mp(0,0));
	for(int i=0;i<n;i++){
		cin >> x >> y >> c[i];
		pos[i] = mp(x,y);
	}
	double ans = 1e9;
	for(double i=-1000;i<1001;i+=1){
		for(double j=-1000;j<1001;j+=0.1){
			ans = min(ans,solve(i,j,k));
		}
	}
	cout << ans << endl;
	return 0;
}
