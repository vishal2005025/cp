#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q=count(s.begin(),s.end(),'1');
    int w=n-q;
    int e=abs(q-w);
    if(n&1){
        if(e==1){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
    else{
        if(e==0){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
}
signed main()
{
    int t=1;
    cin>>t;
    while(t--){
     solve();


    
    
    
    }
    return 0;
}