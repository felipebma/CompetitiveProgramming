 #include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	double n,l,max=0, aux=0, previous, dist;
	vector<double> v;
	cin >> n >> l;
	cin >> max;
	n--;	
	while(n--){
		cin >> aux;
		v.append(aux);
	}
	for(int i=0;i<v.size();i++){
		previous = aux;
		cin >> aux;
		max = ((aux-previous)/2>max)?(aux-previous):max;
	}
	max =(max>l-aux)?max:(l-aux);
	
	cout << max;
	return 0;
} 
