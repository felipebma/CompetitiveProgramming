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
	int n, aux;
	 cin >> n;
	 vector<int> arr;
	 stack<int> pilha;
	 unordered_set<int> set;
	 for (int i = 0; i < n; i += 1){
	 	cin >> aux;
	 	arr.pb(aux);
	 }
	 int cont =0;
	 for (int i = n-1; i >-1; i--){
	 	if(!set.count(arr[i])){
	 		pilha.push(arr[i]);
	 		set.insert(arr[i]);
	 		cont++;
	 	}
	 }
	 cout << cont << endl;
	 while(!pilha.empty()){
	 	aux = pilha.top();
	 	pilha.pop();
	 	cout << aux << " ";
	 }
	return 0;
}
