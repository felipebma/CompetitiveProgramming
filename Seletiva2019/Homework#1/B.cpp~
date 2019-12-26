#include <bits/stdc++.h>

using namespace std;

int main(){
	char c;
	int atual=0,best=0;
	string bestW, atualW="", s;
	while(cin >> s){
		for(auto c:s){
			if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||c=='-'){
				atual++;
				if(c>='A'&&c<='Z'){
					atualW+= (c-'A'+'a');
				}else{
					atualW+=c;
				}
			}
		}
		if(atual>best){
			best=atual;
			bestW=atualW;
		}
		atual=0;
		atualW="";
		
	}
	cout << nouppercase << bestW;
	return 0;
}
