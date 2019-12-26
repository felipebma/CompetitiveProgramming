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
		int n,x;
		cin >> n;
		vector<int> arr;
		while(n--){
			cin >> x;
			arr.push_back(x);
		}
		int cont=1;
		x = arr[0];
			while(x!=1){
				x=arr[x-1];
				cont++;
			}
		cout << cont;
		for(int i=1;i<arr.size();i++){
			cont = 1;
			x = arr[i];
			while(x!=i+1){
				x=arr[x-1];
				cont++;
			}
			cout << " " << cont;
		}
		cout << endl;
	}
	return 0;
}
