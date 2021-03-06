#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

int mod;

void matrix_mult(vector<vector<int>> A, vector<vector<int>> B){
	vector<vector<int>> aux;
	aux.assign(A.size(),vector<int>(B[0].size()));
	for(int i=0;i<A.size();i++){
		for(int j=0;j<B[0].size();j++){
			aux[i][j]=0;
			for(int k=0;k<A[0].size();k++){
				aux[i][j]+=(A[i][k]*B[k][j])%mod;
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

void fast_exp(vector<vector<int>> A,int pot){
	vector<vector<int>> aux;
	aux.assign(A.size(),vector<int>(A[0].size()));
	if(pot==0 || pot==1) return;
	for(int i=0;i<A.size();i++){
		for (int j = 0; j < A.size(); j ++){
			aux[i][j]=A[i][j];
		}
	}
	fast_exp(A,pot/2);
	matrix_mult(A,A);
	if(pot%2) matrix_mult(A,aux);
}

int fib(int n, int l){
	vector<vector<int>> aux;
	aux.assign(n,vector<int>(n,0));
	aux[0][0]=1;
	for(int i=1;i<n;i++){
		aux[0][i]=1;
		aux[i][i-1]=1;
	}
	if(l<n) return l;
	fast_exp(aux,n-1);
	int ans=0;
	for(int i=0;i<n;i++){
		ans+= aux[0][i]*(n-i-1);
	}
	return ans;
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases, n,k,l;
	cin >> nCases;
	while(nCases--){
		cin >> n >> k >> l;
		mod=1;
		while(k--)mod*=10;
		cout << fib(n,l) << endl;
	}
	return 0;
}
