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
    int x=a%b!=0;
    int y=a/b;
    int z=a-(x+y);
    if(z<=c) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
    }
    return 0;
}