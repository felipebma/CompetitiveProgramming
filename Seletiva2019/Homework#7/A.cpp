#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

int k;
vector<int> num;

int solveAux(int pos, int digit, int resto, int flag, int agoraVai){
    int new_resto = (resto+digit)%k, ans=0;
    if(pos==0){
        ans = (new_resto==0)?1:0;
        return ans && agoraVai%k==0;
    }
    int lim =9, new_flag;
    if(flag){
        lim = num[pos-1];
    }
    for(int i=0;i<=lim;i++){
        new_flag = flag&&(i==lim);
        ans+= solveAux(pos-1,i,new_resto,new_flag, agoraVai*10+i);
    }
    return ans;
}

int solve(int a){
    int size=0;
    num.clear();
    while(a>0){
        num.pb(a%10);
        a/=10;
        size++;
    }
    num.pb(0);
    return solveAux(size,0,0,1, 0);
}



int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int nCases;
    cin >> nCases;
    for(int i=1;i<=nCases;i++){
    		cout << "case " << i << ": ";
        int a, b;
        cin >> a >> b >> k;
        int auxA, auxB;
        auxB = solve(b);
        auxA = solve(a-1);
        cout << auxB-auxA << endl;
    }
    return 0;
}
