#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int a,b;
	cin >> a >> b;
	int cont=1;
	if(b==1){
		cout << 0 << endl;
	}else{
		b-=a;
		cont+=ceil(1.0*b/(a-1));
		cout << cont << endl;
	}
	
	return 0;
}
