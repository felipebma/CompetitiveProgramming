#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int m, n, aux;
	while(cin >> m >> n){
		if(m==0&&n==0) break;
		set<int> a,b;
		while(m--){
			cin >> aux;
			a.insert(aux);
		}
		while(n--){
			cin >> aux;
			b.insert(aux);
		}
		int cont=0;
		if(a.size()<b.size()){
			for(auto i:a){
				if(b.count(i)) cont++;
		}
		}else{	
			for(auto i:b){
				if(a.count(i)) cont++;
			}
		}
		cout << cont << endl;
	}
	return 0;
}
