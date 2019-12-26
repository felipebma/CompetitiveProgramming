#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
using namespace std;

bool solved;

void check(vector<int> &arr, int pos, int total){
	if(solved || pos==4 ){
		if(total==23 )solved = true;
		return;
	}
	check(arr,pos+1, total+arr[pos+1]);
	check(arr,pos+1, total*arr[pos+1]);
	check(arr,pos+1, total-arr[pos+1]);
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	vector<int> numbers(5);
	while(true){
		bool fim = true;
		for(int i=0;i<5;i++){
			cin >> numbers[i];
			fim = fim && numbers[i]==0;
		}
		if(fim) break;
		solved = false;
		for (int i = 0; i < 120; i += 1){
			check(numbers,0,numbers[0]);
			next_permutation(numbers.begin(),numbers.end());
		}
 		if(solved){
 			cout << "Possible" << endl;
 		}else{
 			cout << "Impossible" << endl;
 		}
	}
	return 0;
}
