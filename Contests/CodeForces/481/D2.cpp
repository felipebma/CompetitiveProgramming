#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, aux,a0,a1,cont=0, best=1e9, dif;
	bool deu;
	cin >> n;
	if(n<3){
		cout << 0 << endl;
		return 0;
	}
	vector<int> arr;
	for(int i=0;i<n;i++){
		cin >> aux;
		arr.pb(aux);
	}
	a0=arr[0];
	a1=arr[1];
	for(int i=-1;i<2;i++){
		for(int j=-1;j<2;j++){
			arr[0]=a0+i;
			arr[1]=a1+j;
			dif = arr[1]-arr[0];
			cont = abs(i)+abs(j);
			deu=true;
			for(int k=2;k<n && deu;k++){
				aux= arr[0]+k*dif;
				if(aux!=arr[k]){
					if(abs(aux-arr[k])>1){
						deu = false;
					}else{
						cont++;
					}
				}
			}
			if(cont<best && deu) best = cont;
			if(best ==0){
				cout << 0 << endl;
				return 0;
			}
		}
	}
	if(best!=1e9){
		cout << best << endl;
	}else{
		cout << -1 << endl;
	}
	
	return 0;
}
