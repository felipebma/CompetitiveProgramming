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
    string s;
    int size,letters;
    cin >> size >> letters;
    cin >> s;
    bool l[26];
    char aux;
    for(int i=0;i<letters;i++){
        cin >> aux;
        l[aux-'a']=true;
    }
    int cont =0, ans=0;
    for(char c:s){
        if(l[c-'a']){
            cont++;
        }else{
            ans+= (cont*(cont+1))/2;
            cont=0;
        }
    }
    ans+= (cont*(cont+1))/2;
    cout << ans;
    return 0;
}