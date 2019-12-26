#include <bits/stdc++.h>

using namespace std;

int main(){
	map<string,string> m;
	string line, meaning, key;
	while (getline(cin,line)){
		if(line.empty()) break;
		stringstream s(line);
		s >> meaning >> key;
		m[key] = meaning;
	}
	while(cin >> key){
		if(m.count(key)){
			cout << m[key] << endl;
		}else{
			cout << "eh" << endl;
		}
	}
	
	return 0;
}
