#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int v1, v2, t, d, res;
	cin >> v1 >> v2 >> t >> d;
	vector<int> arr(t);
	arr[0]=v1;
	res = v1+v2;
	for (int i = 1; i < t-1; i += 1){
		arr[i] = min(arr[i-1]+d,v2+d*(t-i-1));
		res+=arr[i];
	}
	cout << res << endl;
	return 0;
}
