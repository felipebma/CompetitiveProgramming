#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;
vector<set<int>> graph(26);
vector<vector<int>> sol;
stack<int> helper;

void topo(int i){
	
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	vector<string> str = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	
	vector<int> v(26);
	fill(v.begin(),v.end(),-1);
	int m, a;
	string auxs, auxs2;
	vector<string> names;
	cin >> m;
	for (int i = 0; i < m; i += 1){
		cin >> auxs;
		names.push_back(auxs);
	}
	for(int i=1;i<m;i++){
		auxs=names[i];
		for(int k=0;k<i;k++){
			int j=0;
			auxs2 = names[k];
			while(j<auxs.length() && j<auxs2.length() && auxs[j]==auxs[j-1]) j++;
			if(auxs<auxs2 && (j==auxs.length() || j==auxs2.length())){
				cout << "Impossible" << endl;
				return 0;
			}
			if(j<auxs.length() && j<auxs2.length()) {
				graph[auxs2[j]-'a'].insert(auxs[j]-'a');
			}
			cout << i << " " << j << ": " << str[(auxs2[j]-'a')] << " " << str[auxs[j]-'a'] << endl;
		}
		
		
	}
	
	
	
	return 0;
}
