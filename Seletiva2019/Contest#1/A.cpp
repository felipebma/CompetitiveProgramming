#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	stack<int> pile,min;
	int n,gift;
	string command;
	cin >> n;
	while(n--){
		cin >> command;
		if(command=="PUSH"){
			cin >> gift;
			pile.push(gift);
			if(min.empty()){
				min.push(gift);
			}else	if(gift<=min.top()){
				min.push(gift);
			}
		}else if(command=="MIN"){
			if (!pile.empty()){
				cout << min.top() << "\n" << "\n";
			}else{
				cout << "EMPTY" << "\n" << "\n";
			}
		}else if(command == "POP"){
			if (!pile.empty()){
				gift = pile.top();
				pile.pop();
				if(gift==min.top()) min.pop();
			}else{
				cout << "EMPTY" << "\n" << "\n";
			}
		}
		
	}
	return 0;
}
