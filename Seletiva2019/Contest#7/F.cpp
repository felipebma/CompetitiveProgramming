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
	int nCases, n, x, mult, soma, aux;
	cin >> nCases;
	for (int i = 0; i < nCases; i += 1){
		vector<int> arr;
		cin >> n;
		mult =1;
		soma=0;
		for (int i = 0; i < n; i += 1){
			cin >> x;
			arr.pb(x);
			mult = (mult*x)/gcd(mult,x);
		}
		for (int i = 0; i < n; i += 1){
			soma+= mult/(arr[i]);
		}
		aux = gcd(soma,n);
		n/=aux;
		soma/=aux;
		aux = gcd(soma,mult);
		soma/=aux;
		mult/=aux;
		cout << "Case " << (i+1) << ": " << (n*mult) << "/" << soma << endl;
	}
	return 0;
}
