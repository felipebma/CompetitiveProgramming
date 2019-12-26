#include <bits/stdc++.h>

using namespace std;

int main(){
	stack<char> stack;
	string str;
	int cont=0;
	cin >> str;
	for(auto c:str){
		if(!stack.empty() && c==stack.top()){
			stack.pop();
			cont++;
		}else{
			stack.push(c);
		}
	}
	cout << ((cont&1)?"Yes":"No");
	return 0;
}
