#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

int mod=1e9;

void matrix_mult(int A[2][2], int B[2][2]){
	int aux[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			aux[i][j]=0;
			for(int k=0;k<2;k++){
				aux[i][j]+=A[i][k]*B[k][j];
			}
			aux[i][j]%=mod;
		}
	}
	for(int i=0;i<2;i++){
		for (int j = 0; j < 2; j ++){
			A[i][j]=aux[i][j];
		}
	}
}

void fast_exp(int A[2][2],int pot){
	int aux[2][2];
	if(pot==0 || pot==1) return;
	for(int i=0;i<2;i++){
		for (int j = 0; j < 2; j ++){
			aux[i][j]=A[i][j];
		}
	}
	fast_exp(A,pot/2);
	matrix_mult(A,A);
	if(pot%2) matrix_mult(A,aux);
}

int fib(int n){
	int aux[2][2] = {{1,1},{1,0}};
	if(n<2) return n;
	fast_exp(aux,n-1);
	return aux[0][0];
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases, n, ans;
	cin >> nCases;
	while(nCases--){
		cin >> n >> mod;
		ans = fib(n) + fib(n+3)-(n+2);
		if(ans<0) ans += mod*(((n+2)/mod)+1);
		cout << ((ans>=0)?(ans%mod):(ans+mod)) << endl;
	}
	return 0;
}
