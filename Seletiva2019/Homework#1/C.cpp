#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

bool compare(pair<string,int> i1, pair<string,int> i2) 
{ 
	string i1L=i1.first, i2L=i2.first;
	transform(i1L.begin(), i1L.end(), i1L.begin(), ::tolower);
	transform(i2L.begin(), i2L.end(), i2L.begin(), ::tolower);
    return (i1.second > i2.second || (i1.second==i2.second && i1L<i2L)); 
} 

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n, p, aux,caso=1;
	string nome,auxS;
	while (cin >> n){
		vector<pair<string,int>> arr;
		while(n--){
			getline(cin,nome,';');
			p=0;
			for(int i=0;i<4;i++){
				getline(cin,auxS,';');
				stringstream ss(auxS);
				for (int i = 0; i < 5; i += 1)
				{
					ss >> aux;
					p+=aux;
				}
				p+=aux;
			}
			for (int i = 0; i < 5; i += 1)
			{
				cin >> aux;
					p+=aux;
			}
			p+=aux;
			arr.push_back(make_pair(nome,p));
		}
		sort(arr.begin(),arr.end(),compare);
		cout << "case " << caso << ":";
		caso++;
		for(auto P:arr){
			cout << P.first << " " << P.second;
		}
		cout << endl;
	}
	return 0;
}
