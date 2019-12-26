#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases, a,b, count;
	cin >> nCases;
	while(nCases--){
		cin >> a >> b;
		a--;
		b--;
		vector<string> grid;
		string s;
		getline(cin,s);
		while(true){
			getline(cin,s);
			if(s=="") break;
			grid.push_back(s);
		}
		count=0;
		stack<pair<int,int>> stack;
		if(grid[a][b]=='0'){
			stack.push(make_pair(a,b));
			grid[a][b]='1';
		}
		while(!stack.empty()){
			count++;
			a=stack.top().first;
			b=stack.top().second;
			stack.pop();
			if(a>0){
				if(grid[a-1][b]=='0'){
					stack.push(make_pair(a-1,b));
					grid[a-1][b]='1';
				}
			}
			if(a<grid.size()-1){
				if(grid[a+1][b]=='0'){
					stack.push(make_pair(a+1,b));
					grid[a+1][b]='1';
				}
			}
			if(b>0){
				if(grid[a][b-1]=='0'){
					stack.push(make_pair(a,b-1));
					grid[a][b-1]='1';
				}
			}
			if(b<grid[0].size()-1){
				if(grid[a][b+1]=='0'){
					stack.push(make_pair(a,b+1));
					grid[a][b+1]='1';
				}
			}
		}
		cout << count << endl;
		if(nCases>0) cout << endl;
	}
	return 0;
}
