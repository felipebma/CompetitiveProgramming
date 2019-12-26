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
	sort(arr.begin(),arr.end());
	if(arr.size()>0){
		cout << arr[0];
		for(int i=1;i<arr.size();i++) cout << " " << arr[i];
	}
	return 0;
}
