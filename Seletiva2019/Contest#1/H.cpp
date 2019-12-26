#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	priority_queue<pair<long long,string>,vector<pair<long long ,string>>,greater<pair<long long,string>>> heap;
	map<string,long long> map;
	long long n, c, value;
	string prod;
	cin >> n;
	for (int i = 1; i <= n; i += 1){
		cin >> c >> prod;
		if(c==1){
			cin >> value;
			map[prod]=value;
			heap.push(make_pair(value,prod));
		}else if(c ==2){
			cin >> value;
			map[prod]=value;
			heap.push(make_pair(value,prod));
		}else if(c==3){
			while(map[heap.top().second]!=heap.top().first){
				heap.pop();
			}
			map.erase(heap.top().second);
			cout << heap.top().second << " " << i << endl;
			heap.pop();
		}
	}
	return 0;
}
