#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nWords, n, aux;
	cin >> nWords >> n;
	map<string,int> map;
	string word;
	while(nWords--){
		cin >> word >> aux;
		map[word] = aux;
	}
	int pont=0;
	while(cin >> word){
		if(map.count(word)) pont+=map[word];
		if(word=="."){
			cout << pont << endl;
			pont=0;
		}
	}
	return 0;
}
