#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, h;
	cin >> n;
	stack<int> stack;
	while(n--){
		cin >> h;
		if(stack.empty()){
			stack.push(h%2);
		}else{
			if(stack.top()==h%2){
				stack.pop();
			}else{
				stack.push(h%2);
			}
		}
	}
	if(stack.size()<2){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
