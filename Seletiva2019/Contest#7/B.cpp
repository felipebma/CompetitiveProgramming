#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

vector<int> str;

int get25(){
	int cinco=30, dois=30;
	for(int i=0;i<str.size();i++){
		if(str[i]==5){
			cinco = i;
		}
		if(str[i]==2){
			dois = i;
		}
	}	
	if(cinco == str.size()-1){
		
	}
}
int get75(){
		
}
int get00(){
		
}
int get50(){
		
}



int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	string s;
	cin >> s;
	vector<int> arr(5,-1);
	for(int i=0;i<s.length();i++){
		if(s[i]=='0'){
			if(arr[)
			arr[0]=s.length-i;
		}else if(s[i]=='5'){
			arr[1]=s.length-i;
		}else if(s[i]=='2'){
			arr[0]=s.length-i;
		}else if(s[i]=='0'){
			arr[0]=s.length-i;
		}
	}
	return 0;
}
