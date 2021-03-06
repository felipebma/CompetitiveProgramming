#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

string getMin(string s){
	bool switched=false;
	char smaller='Z'+1;
	int pos;
	for(int i=0;i<s.length()&&!switched;i++){
		smaller='Z'+1;
		for(int j=i;j<s.length();j++){
			if(s[j]<=smaller){
				smaller=s[j];
				pos=j;
			}
		}
		if(i<pos&&s[i]>smaller){
			char aux = s[i];
			s[i]=smaller;
			s[pos]=aux;
			switched = true;
		}
	}
	return s;
}


int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases;
	string s,t;
	cin >> nCases;
	while(nCases--){
		cin >> s >> t;
		s = getMin(s);
		if(s<t){
			cout << s << endl;
		}else{
			cout << "---" << endl;
		}
	}
	return 0;
}
