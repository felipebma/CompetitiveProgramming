#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	vector<int> choc,coup;
	long long n,m,sum=0;
	cin >> n;
	while(n--){
		cin >> m;
		sum+=m;
		choc.push_back(m);
	}
	sort(choc.begin(),choc.end());
	
	cin >> m;
	while(m--){
		cin >> n;
		coup.push_back(n);
	}
	
	for(int i=0;i<coup.size();i++){
		cout << sum-choc[choc.size()-1-max(coup[i]-1,0)] << "\n";
	}
	
	
	return 0;
}
