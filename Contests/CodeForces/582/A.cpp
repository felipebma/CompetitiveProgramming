#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

void order(int &a,int &b, int &c){
	vector<int> arr;
	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);
	sort(arr.begin(),arr.end());
	a=arr[0];
	b=arr[1];
	c=arr[2];
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int a,b,c, n;
	cin >> n;
	while(n--){
		cin >> a >> b >> c;
		order(a,b,c);
		if(b==a+1 && c==b+1){
			cout << 0 << endl;
			continue;
		}
		int dist =0, distAB = abs(b-a), distBC = abs(b-c), distAC = abs(c-a);
		dist += max(0,distAB-2);
		dist += max(0,distAC-2);
		dist += max(0,distBC-2);
		if(b>a+1 && b<c-1){
			dist+=2;
		}else if((b==a+1 && b!=c)||(a!=b&&b==c-1)) dist++;
		cout << dist << endl;
	}
	return 0;
}