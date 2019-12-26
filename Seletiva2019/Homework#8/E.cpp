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
	int min = min(a,b), max = max(a,b);
	if(max%min==0) return min;
	return gcd(min,max%min);
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, mdc, aux, ans=0;
	cin >> n >> mdc;
	while(--n){
		cin >> aux;
		mdc = gcd(mdc,aux);
	}
	for(int i=1;i<sqrt(mdc);i++){
		if(mdc%i==0) ans+=2;
	}
	if(sqrt(mdc)*(int)sqrt(mdc)==mdc) ans++; 
	cout << ans << endl;
	return 0;
}
