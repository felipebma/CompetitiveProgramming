#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,aux;
	while(cin >> n){
		if(n==0) break;
		stack<int> s;
		queue<int> q;
		while(n--){
			cin >> aux;
			q.push(aux);
		}
		aux=1;
		while(!q.empty()){
			if(((int)q.front())==aux){
				q.pop();
				aux++;
			}else{
				if(!s.empty()){
					if((int)q.front()>(int)s.top() && s.top()!=aux){
						break;
					}
				}
				while(!s.empty()&&s.top()==aux){
						aux++;
						s.pop();
				}
				if(q.front()!=aux){
					s.push(q.front());
					q.pop();
				}
			}
		}
		if(q.empty()){
			cout<< "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
	return 0;
}
