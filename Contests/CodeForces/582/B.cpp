#include <bits/stdc++.h>
#define ll long long
#define int ll
#define endl '\n'
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    string s;
    cin >> n;
    while(n--){
        int l=0,r=0,u=0,d=0;
        cin >> s;
        for(char c:s){
            if(c=='R'){
                r++;
            }else if(c=='L'){
                l++;
            }else if(c=='U'){
                u++;
            }else if(c=='D'){
                d++;
            }
        }
        r = min(r,l);
        l=r;
        u = min(u,d);
        d=u;
        if(l>0 && u>0){
            cout << 2*(u+r) << endl;
            while(u--){
                cout << "U";
            }
            while(r--){
                cout << "R";
            }
            while(d--){
                cout << "D";
            }
            while(l--){
                cout << "L";
            }
        }else if(l>0){
            cout << 2 << endl << "RL";
        }else if(u>0){
            cout << 2 << endl << "UD";
        }else{
            cout << 0;
        }
        cout << endl;
    }
    return 0;
}