#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
vector<vector<int>> res;
set<vector<int>> resAux;

void solve(vector<int> sol,vector<int> numbers, int n, int sum,int i){
	if(sum>n || i==numbers.size()) return;
	sol.push_back(numbers[i]);
	sum+=numbers[i];
	if(sum==n){
		if(!resAux.count(sol)){
			res.push_back(sol);
			resAux.insert(sol);
		}
	}
	solve(sol,numbers,n,sum,i+1);
	sum-=numbers[i];
	sol.pop_back();
	solve(sol,numbers,n,sum,i+1);
}


int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, size, aux;
	while(cin >> n >> size){
		if(size==0) break;
		vector<int> numbers;
		while(size--){
			cin >> aux;
			numbers.push_back(aux);
		}
		res.clear();
		vector<int> sol;
		solve(sol,numbers,n,0,0);
		cout << "Sums of " << n << ":" << endl;
		if(res.empty()){
			cout << "NONE" << endl;
		}else{
			for(vector<int> v:res){
				for(int i=0;i<v.size()-1;i++){
					cout << v[i] << "+";
				}
				cout << v[v.size()-1] << endl;
			}
		}
		
	}
	return 0;
}
