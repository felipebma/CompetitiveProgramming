#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

int mod = 1e9+9;

void matrix_mult(int A[3][3], int B[3][3]){
	int aux[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			aux[i][j]=0;
			for(int k=0;k<3;k++){
				aux[i][j]+=A[i][k]*B[k][j];
			}
			aux[i][j]%=mod;
		}
	}
	for(int i=0;i<3;i++){
		for (int j = 0; j < 3; j ++){
			A[i][j]=aux[i][j];
		}
	}
}

void fast_exp(int A[3][3],int pot){
	int aux[3][3];
	if(pot==0 || pot==1) return;
	for(int i=0;i<3;i++){
		for (int j = 0; j < 3; j ++){
			aux[i][j]=A[i][j];
		}
	}
	fast_exp(A,pot/2);
	matrix_mult(A,A);
	if(pot%2) matrix_mult(A,aux);
}

int tribonacci(int n){
	int aux[3][3] = {{1,1,1},{1,0,0},{0,1,0}};
	if(n<=3) return n;
	fast_exp(aux,n-2);
	return (2*aux[0][0]+aux[0][1]);
}




int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n;
	while(cin >> n){
		if(!n) return 0;
		cout << tribonacci(n-1)%mod << endl;
	}
	
	return 0;
}
