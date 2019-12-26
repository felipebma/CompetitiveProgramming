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
	int n, w, aux, cont=0, min=0, max = 0;
	cin >> n >> w;
	for(int i=0;i<n;i++){
		cin >> aux;
		cont +=aux;
		if(min>cont) min=cont;
		if(max<cont) max=cont;
	}
	if(max > w){
		cout << 0 << endl;
		return 0;
	}
	min = (min<0)?-min:0;
	max = (max<=0)?w:w-max;
	int dif = max-min;
	cout << ((dif<0)?0:(dif+1)) << endl;
	return 0;
}
