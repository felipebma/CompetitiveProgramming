#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;
int ms=1e6+4;
vector<bool> sieve(ms, true);

void make_sieve(){
	sieve[0]=false;
	sieve[1]=false;
	for(int i=2;i<ms;i++){
		if(sieve[i]){
			int aux=2*i;
			while(aux<ms){
				sieve[aux]=false;
				aux+=i;
			}
		}
	}
}

bool bs(vector<int> &arr, int target, int l, int r){
	if(l>=r) return arr[r]*arr[r]==target;
	int mid = (r+l)/2;
	int num = arr[mid]*arr[mid];
	if(num==target) return true;
	if(num<target) return bs(arr,target,mid+1,r);
	bs(arr,target,l,mid);
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	vector<int> primos;
	make_sieve();
	for(int i=0;i<ms;i++){
		if(sieve[i]) primos.pb(i);
	}
	int n,x;
	cin >> n;
	while(n--){
		cin >> x;
		cout << ((bs(primos,x,0,primos.size()-1))?"YES":"NO") << endl;
	}
	return 0;
}
