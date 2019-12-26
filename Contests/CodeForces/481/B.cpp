#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, cont =0,acc=0;
	cin >> n;
	string s;
	 cin >> s;
	for(char c:s){
		if(c=='x'){
			acc++;
		}else{
			acc=0;
		}
		if(acc>2) cont++;
	}
	cout << cont << endl;
	return 0;
}
