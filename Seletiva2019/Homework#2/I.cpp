#include <bits/stdc++.h>

#define endl "\n"
using namespace std;


int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	char aux;
	string s;
	int nCases;
	cin >> nCases;
	while (nCases--){	
		cin >> s;
		stack<char> op;
		for(char c:s){
			if(c=='-' || c=='+' || c=='/' || c=='*' || c=='^'){
				op.push(c);
			}else if(c==')'){
				cout << op.top();
				op.pop();
			}else if(c!='('){
				cout << c;
			}
		}
		cout << endl;
	}
	return 0;
}

