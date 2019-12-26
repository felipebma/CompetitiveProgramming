#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	long long last=0, n,i, soma=0, max=0;
	cin >> n;
	while(n--){
		cin >> i;
		soma+=i;
		max = (i>max)?i:max;
		i-=last;
		last=i;
	}
	if((last!=0 && soma<2*max) || soma&1){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
	
	return 0;
}
