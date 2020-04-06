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
	map<int,pair<int,int>> map;
	vector<vector<bool>> set(3,vector<bool>(3,false));
	int aux,n;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin >> aux;
			map[aux] = mp(i,j);
		}
	}
	cin >> n;
	while(n--){
		cin >> aux;
		if(map.count(aux)){
			pair<int,int> aux2 = map[aux];
			set[aux2.first][aux2.second] = true;
		}
	}
	bool ok = ((set[0][0])&&(set[0][1])&&(set[0][2])) ||((set[1][0])&&(set[1][1])&&(set[1][2])) ||((set[2][0])&&(set[2][1])&&(set[2][2]));
	ok = ok|| ((set[0][0])&&(set[1][0])&&(set[2][0])) ||((set[0][1])&&(set[1][1])&&(set[2][1])) ||((set[0][2])&&(set[1][2])&&(set[2][2]));
	ok = ok|| ((set[0][0])&&(set[1][1])&&(set[2][2])) ||((set[2][0])&&(set[1][1])&&(set[0][2]));
	
	cout << (ok?"Yes":"No") << endl;
	
	return 0;
}
