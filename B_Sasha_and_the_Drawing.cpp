#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int a,b;
       cin>>a>>b;
       int x= 4*a-2;
       if(b!=x)
       cout<<(b+1)/2<<'\n';
       else
       cout<<2*a<<'\n';
       
    }
}