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
	int a, b;
	cin >> a >> b;
	while(b>0){
		if(a%10==0){
			a/=10;
			b--;
		}else{
			b-=a%10;
			a/=10;
			a*=10;
			if(b<=0){
				a-=b;
			}
		}
	}
	cout << a;
	return 0;
}