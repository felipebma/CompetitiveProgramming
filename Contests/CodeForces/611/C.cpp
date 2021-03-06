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
	int n, aux,last;
	cin >> n;
	vector<int> arr(n+1);
	set<int> free;
	for(int i=1;i<n+1;i++){
		free.insert(i);
	}
	for (int i = 1; i < n+1; i += 1)
	{
		cin >> aux;
		arr[i]=aux;
		free.erase(aux);		
	}
	for(int i=1;i<n+1;i++){
		if(arr[i]==0){
			bool found = false;
			for(auto j:free){
				if(j!=i){
					found=true;
					aux = j;
					break;
				}
			}
			if(found){
				last=i;
				arr[i]=aux;
				free.erase(aux);
			}else{
				arr[i]=arr[last];
				arr[last]=i;
				free.erase(i);
				last=i;
			}
		}
	}
	for(int i=1;i<n+1;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
