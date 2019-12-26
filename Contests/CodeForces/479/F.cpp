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
	map<int,vector<int>> lists;
	map<int,int> origin;
	map<int,int> size;
	int n,num;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> num;
		if(origin.count(num-1)>0){
			int aux = origin[num-1];
			if(size[aux]<(num-aux)+1){
			origin[num]=aux;
			size[aux]++;
			lists[aux].pb(i+1);}
		}else if(origin.count(num)==0){
			size[num]=1;
			origin[num]=num;
			lists[num].pb(i+1);
		}
	}
	int best=0, ini;
		for(auto p:size){
			if(p.second>best){
				best= p.second;
				ini=p.first;
			}
		}
		cout << lists[ini].size() << endl;
		for(int i:lists[ini]){
			cout << i << " ";
		}
		cout << endl;
	return 0;
}
