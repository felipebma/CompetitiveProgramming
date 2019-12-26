#include <bits/stdc++.h>

using namespace std;

int main(){
	int nCases,l,m,s, lado, capa, cont;
	string side;
	cin >> nCases;
	while(nCases--){
		lado=0;
		cont=0;
		queue<int> left,right;
		cin >> l >> m;
		l*=100;
		while(m--){
			cin >> s >> side;
			if(side=="left"){
				left.push(s);
			}else{
				right.push(s);
			}
		}
		while (!left.empty() || !right.empty()){
			if(lado==0){
				capa=0;
				while(!left.empty()){
					if(capa+left.front()<=l){
						capa+=left.front();
						left.pop();
					}else{
						break;
					}
				}
				cont++;
			}else{
				capa=0;
				while(!right.empty()){
					if(capa+right.front()<=l){
						capa+=right.front();
						right.pop();
					}else{
						break;
					}
				}
				cont++;
			}
			lado=(lado+1)%2;
		}
		cout << cont << endl;
	}
	return 0;
}
