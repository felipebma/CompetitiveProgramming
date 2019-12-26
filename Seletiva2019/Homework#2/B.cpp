#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v (6,0);
	int n,aux,res=0;
	bool deuRuim=false;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> aux;
		v[aux]++;
	}
	
	for(int i=0;i<n;i++){
		cin >> aux;
		v[aux]--;
	}
	aux=0;
	for(int i=1;i<6;i++){
		aux+=v[i];
		if(abs(v[i])%2==1) deuRuim = true;
		res+=(v[i]>0)?v[i]:0;
	}
	if(aux!=0 || res%2==1 || deuRuim){
		cout << -1 << endl;
	}else{
		cout << (res/2) << endl;
	}
	return 0;
}

