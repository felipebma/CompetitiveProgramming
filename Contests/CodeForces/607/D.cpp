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
	cin >> nCases;
	while(nCases--){
		int l,c;
		string s;
		bool one=false, complete=true, impossible=true, two= false, line;
		cin >> l >> c;
		vector<vector<bool>> arr(l,vector<bool>(c));
		for(int i=0;i<l;i++){
			cin >> s;
			line = true;
			for(int j=0;j<c;j++){
				arr[i][j] = (s[j]=='A');
				complete = complete&&arr[i][j];
				line = line&&arr[i][j];
				impossible = impossible&&!arr[i][j];
			}
			if(line){
				if(i==0 || i==l-1){
					one=true;
				}else{
					two = true;
				}
			} 
		}
		if(complete){
			cout << 0 << endl;
			continue;
		}
		if(impossible){
			cout <<"MORTAL" << endl;
			continue;
		}
		if(one){
			cout << 1 << endl;
			continue;
		}
		for(int i=0;i<c;i++){
			line = true;
			for(int j=0;j<l;j++){
				line = line&&arr[j][i];
			}
			if(line){
				if(i==0 || i==c-1){
					one = true;
				}else{
					two=true;
				}
			}
		}
		if(one){
			cout << 1 << endl;
			continue;
		}
		if(two || arr[0][0] || arr[l-1][0] || arr[0][c-1] || arr[l-1][c-1]){
			cout << 2 << endl;
			continue;
		}
		bool three=false;
		for(int i=0;i<l;i++){
			if(arr[i][0]||arr[i][c-1]){
				three = true;
				break;
			}
		}
		for(int i=0;i<c && !three;i++){
			if(arr[0][i]||arr[l-1][i]){
				three = true;
				break;
			}
		}
		if(three){
			cout << 3 << endl;
			continue;
		}
		cout << 4 << endl;		
	}
	return 0;
}
