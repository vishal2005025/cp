#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
         cin>>a[i];
       }
       map<int,int> m;
       for(int i=0;i<n;i++)
       {
         m[a[i]]++;
       }
       int x=0;
       if(m.size()==1)
       cout<<"YES"<<'\n';
       else if(m.size()==2)
       {
         for(auto i:m)
         {
            x=i.second-x;
         }
         if(abs(x)==1 || x==0)
         cout<<"YES"<<'\n';
         else
         cout<<"NO"<<'\n';
       }
       else
       cout<<"NO"<<'\n';
       
    }
}