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
	int a,b,c,d,e,f, tot1,tot2, aux;
	cin >> a >> b >> c >> d >> e >> f;
	if(e==f){
		cout << d*e << endl;
		return 0;
	}
	if(e>f){
		tot1 = (a>d)?d:a;
		d-=tot1;
		tot1 *= e;
		aux = min(b,c);
		tot2 = min(d,aux)*f;
		
	}else{	
		aux = min(b,c);
		tot2 = min(d,aux);
		d-=tot2;
		tot2*=f;
		if(a<d){
			tot1 = a*e;
		}else{
			tot1 = d*e;
		}
	}
	cout << (tot1+tot2) << endl;
	return 0;
}
