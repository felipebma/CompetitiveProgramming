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
	int t;
	cin >> t;
	string s;
	while(t--){
		cin >> s;
		char c = s[s.length()-1];
		if(c=='o'){
			cout << "FILIPINO" << endl;
		}else if(c=='u'){
			cout << "JAPANESE" << endl;
		}else if(c=='a'){
			cout << "KOREAN" << endl;
		}
	}
	return 0;
}
