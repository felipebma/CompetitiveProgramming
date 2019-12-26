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
	int n, aux,a0,a1,cont=0, best=1e9, dif, last;
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
	for(int i=0;i<9;i++){
		switch(i){
			case 1:
				arr[0]=a0;
				arr[1]=a1-1;
				cont=1;
				break;
			case 2:
				arr[0]=a0;
				arr[1]=a1+1;
				cont=1;
				break;
			case 3:
				arr[0]=a0-1;
				arr[1]=a1;
				cont=1;
				break;
			case 4:
				arr[0]=a0-1;
				arr[1]=a1-1;
				cont=2;
				break;
			case 5:
				arr[0]=a0-1;
				arr[1]=a1+1;
				cont=2;
				break;
			case 6:
				arr[0]=a0+1;
				arr[1]=a1;
				cont=1;
				break;
			case 7:
				arr[0]=a0+1;
				arr[1]=a1-1;
				cont=2;
				break;
			case 8:
				arr[0]=a0+1;
				arr[1]=a1+1;
				cont=2;
				break;				
		}
		last = arr[1];
		dif = arr[1]-arr[0];
		deu = true;
		for(int i=2;i<n&&deu;i++){
			int difAux = arr[i]-last;
			if(difAux!=dif){
				if(difAux+1==dif){
					cont++;
					last = arr[i]+1;
				}else if(difAux-1==dif){
					cont++;
					last = arr[i]+1;					
				}else{
					deu=false;
					break;
				}
			}else{
				last = arr[i];
			}
		}
		if(deu && cont < best) best = cont;
		if(best==0){
			cout << 0 << endl;
			return 0;
		}
	}
	if(best!=1e9){
		cout << best << endl;
	}else{
		cout << -1 << endl;
	}return 0;
}
