#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases;
	string s,t;
	cin >> nCases;
	while(nCases--){
		cin >> s >> t;
		int first=0;
		if(s==t){
			cout << "---" << endl;
			continue;
		}
		while(s[first]==t[first] && first<s.length() && first<t.length()) first++;
		if(first==t.length()){
			cout << "---" << endl;
			continue;
		}
		if(first==s.length() || s[first]<t[first]){
			cout << s << endl;
			continue;
		}
		bool found = false, done=false;
		for(int i=first;i<s.length();i++){
			if(s[i]<t[first]){
				char aux = s[i];
				s[i] = s[first];
				s[first]=aux;
				found = true;
				break;
			}
			if(s[i]==t[first]){
				string aux="";
				for(char c:s) aux+=c;
				char aux2 = aux[i];
				aux[i] = aux[first];
				aux[first]=aux2;
				if(aux<t){
					done = true;
					cout << aux << endl;
					found = false;
					break;
				}
			}
		}
		if(found){
			cout << s << endl;
			continue;
		}
		if(done) continue;
		cout << "---" << endl;
		
	}
	return 0;
}
