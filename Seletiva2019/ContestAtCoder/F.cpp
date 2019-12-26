#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	long double q1X=0,q1Y=0,d1=0,q2X=0,q2Y=0,d2=0,q3X=0,q3Y=0,d3=0,q4X=0,q4Y=0,d4=0;
	int n,x,y;
	cin >> n;
	while(n--){
		cin >> x>>y;
		if(q1X+x>=0 &&q1Y+y>=0){
			if(sqrt(pow((q1X+x),2) + pow((q1Y+y),2))>d1){
				q1X+=x;
				q1Y+=y;
				d1 = sqrt(pow((q1X+x),2) + pow((q1Y+y),2));
			}
		}
		if(q2X+x<=0 &&q2Y+y>=0){
			if(sqrt(pow((q2X+x),2) + pow((q2Y+y),2))>d2){
				q2X+=x;
				q2Y+=y;
				d2 = sqrt(pow((q2X+x),2) + pow((q2Y+y),2));
			}
		}
		if(q3X+x<=0 &&q3Y+y<=0){
			if(sqrt(pow((q3X+x),2) + pow((q3Y+y),2))>d3){
				q3X+=x;
				q3Y+=y;
				d3 = sqrt(pow((q3X+x),2) + pow((q3Y+y),2));
			}
		}
		if(q1X+x>=0 &&q1Y+y>=0){
			if(sqrt(pow((q1X+x),2) + pow((q1Y+y),2))>d1){
				q1X+=x;
				q1Y+=y;
				d1 = sqrt(pow((q1X+x),2) + pow((q1Y+y),2));
			}
		}		
	}
	return 0;
}
