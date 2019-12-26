#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main(){
	int n;
	while(cin >> n){
		bool sB=true,qB=true,hB=true;
		priority_queue<int> h;
		queue<int> q;
		stack<int> s;
		int c,v;
		while(n--){
			cin >> c >> v;
			if(c==1){
				h.push(v);
				q.push(v);
				s.push(v);	
			}else if(c==2){
				if(q.empty()){
					qB=false;
					sB=false;
					hB=false;
				}else{
					if(q.front()!=v) qB=false;
					if(s.top()!=v) sB=false;
					if(h.top()!=v) hB=false;
					q.pop();
					s.pop();
					h.pop();
				}
			}
		}
		if(!qB&&!sB&&!hB){
			cout << "impossible" << endl;
		}else if(!qB&&!sB){
			cout << "priority queue" << endl;
		}else if(!hB&&!sB){
			cout << "queue" << endl;
		}else if(!qB&&!hB){
			cout << "stack" << endl;
		}else{
			cout << "not sure" << endl;
		}
		
	}
	return 0;
}
