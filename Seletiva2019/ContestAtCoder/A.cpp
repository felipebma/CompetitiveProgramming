#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	string s, t;
	cin >> s >> t;
	int cont=0;
	for(int i=0;i<3;i++){
		if(s[i]==t[i]) cont++;
	}
	cout << cont << endl;
	return 0;
}
