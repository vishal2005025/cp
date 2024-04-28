#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int d,e;
        d=a+ceil(c/2.0);
        e=b+(c/2);
        if(d>e) cout<<"First"<<endl;
        else if(d<e) cout<<"Second"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}