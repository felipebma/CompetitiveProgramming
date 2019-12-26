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
	int kill=0,cont=0;
	for(int i=arr.size()-1;i>=0;i--){
		if(kill==0) cont++;
		kill--;
		kill= max(kill,arr[i]);
	}
	cout << cont << endl;
	return 0;
}
