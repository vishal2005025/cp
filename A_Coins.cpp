#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
       int a,b;
       cin>>a>>b;
       if(a%2!=0&& b%2==0){
        cout<<"NO"<<endl;
       }
       else cout<<"YES"<<endl;
    }
    return 0;
}