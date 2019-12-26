#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n,c;
	while(cin>>n){
		map<vector<int>,int> map;
		if(n>0){
		while(n--){
			vector<int> courses;
			for(int i=0;i<5;i++){
				cin >> c;
				courses.push_back(c);
			}
			sort(courses.begin(),courses.end());
			map[courses]++;
			
		}
		
			int max=-1, res=0;
			for(auto x:map){
				if(x.second>max){
				 	max = x.second;
				 	res = x.second;
				}else if(x.second==max){
					res+=x.second;
				}
			}
			cout << res << "\n";
		}
	}
	return 0;
}
