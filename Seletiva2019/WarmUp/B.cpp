#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,n=0;
	cin >> a >> b;
	while(a<=b){
		a*=3;
		b*=2;
		n++;
	}
	cout << n << endl;
	
	return 0;
}


//cout << fixed << setprecision(10) << x << endl;