#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(a==b&&(n-2*a)==1){
            cout<<"NO"<<endl;
        }
        else if(a==b&&(n-2*a)!=1) cout<<"Yes"<<endl;
        else if(a+b==n) cout<<"NO"<<endl;
    }
    return 0;
}