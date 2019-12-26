#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	vector<int> arr;
	int n,aux;
	cin >> n;
	while(n--){
		cin >> aux;
		arr.push_back(aux);
	}
	int cont=0, max=0;
	for(int i=arr.size()-2;i>=0;i--){
		if(arr[i]>=arr[i+1]){
			cont++;
		}else{
			max=(max>cont)?max:cont;
			cont=0;
		}
	}
	max=(max>cont)?max:cont;
	cout << max << endl;
	return 0;
}
