#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

int n,k;
int nPath(int x){
	if(x>n){
		return 0;
	}
	if(x==n){
		return 1;
	}
	if(x%2==0){
		return 1+nPath(2*x)+nPath(x+1);
	}else{
		return 1+nPath(2*x);
	}
	return -1;
}

int bs(int low, int high){
	int mid = (low+high)/2;
	if(nPath(mid)<k){
		high=mid-1;
		return(bs(low,high));
	}else if(nPath)
}


int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	cin >>  n >> k;
	return 0;
}
