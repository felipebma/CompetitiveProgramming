#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define min(x,y) (x<y)?x:y;
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int nCases;
	vector<vector<int>> arr;
	cin >> nCases;
	while(nCases--){
		arr.assign(1025,vector<int>(1025,0));
		int d, nB, x, y, nR;
		cin >> d >> nB;
		while(nB--){
			cin >> x >> y >> nR;
			arr[x][y] = nR;
		}
		for (int i = 1; i < 1025; i += 1){
			for (int j = 0; j < 1025; j += 1){
				arr[i][j]+=arr[i-1][j];
			}
		}
		for (int j = 1; j < 1025; j += 1){
			for (int i = 0; i < 1025; i += 1){
				arr[i][j]+=arr[i][j-1];
			}
		}
		int best = LONG_MIN, bestX,bestY, value, borderI, borderJ;
		for(int i=0;i<1025;i++){
			for(int j=0;j<1025;j++){
				borderI = min(1024,i+d);
				borderJ = min(1024,j+d);
				if(i<d+1 && j <d+1){
					value = arr[borderI][borderJ];	
				}else if(i<d+1){
					value = arr[borderI][borderJ] - arr[borderI][j-1-d];
				}else if(j<d+1){					
					value = arr[borderI][borderJ] - arr[i-d-1][borderJ];
				}else{
					value = arr[borderI][borderJ]+arr[i-d-1][j-d-1] - arr[borderI][j-1-d] - arr[i-d-1][borderJ];
				}
				if(value>best){
					best=value;
					bestX = i;
					bestY = j;
				}
			}
		}
		cout << bestX << " " << bestY << " " << best << endl;
	}
	return 0;
}
