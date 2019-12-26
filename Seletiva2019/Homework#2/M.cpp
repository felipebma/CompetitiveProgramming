#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, aux,a,b;
	while (cin >> n){
		if(n==0) break;
		priority_queue<int,vector<int>,greater<int>> arr;
		long long ans=0;
		for (int i = 0; i < n; i += 1)
		{
			cin >> aux;
			arr.push(aux);
		}
		while(arr.size()>1){
			a=arr.top();
			arr.pop();
			b=arr.top();
			arr.pop();
			ans+=a+b;
			arr.push(a+b);
		}
		cout << ans << endl;
	}
	return 0;
}
