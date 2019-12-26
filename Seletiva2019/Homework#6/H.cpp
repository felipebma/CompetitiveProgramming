#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n;
	vector<int> x(3);
	cin >> n >> x[0] >> x[1] >> x[2];
	vector<int> arr(n+1,LONG_MIN);
	arr[0]=0;
	for (int i = 0; i < 3; i += 1){
		int a=x[i];
		for (int i = a; i < n+1; i += 1){
			arr[i] = max(arr[i],arr[i-a]+1);	
		}
	}
	cout << arr[n] << endl;
	return 0;
}
