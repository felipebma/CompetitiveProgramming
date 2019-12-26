#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

bool compare(string s, string s2){
	return s+s2<s2+s;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	vector<string> arr;
	int n;
	string s;
	cin >> n;
	while(n--){
		cin >> s;
		arr.push_back(s);
	}
	sort(arr.begin(),arr.end(),compare);
	for(auto s:arr){
		cout << s;
	}
	return 0;
}
