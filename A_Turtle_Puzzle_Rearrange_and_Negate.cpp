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
       int a[n],sum=0;
       for(int i=0;i<n;i++){
         cin>>a[i];
        //  sum=sum+a[i];
       }
       for(int i=0;i<n;i++){
        
        sum=sum+abs(a[i]);
       }
      cout<<sum<<endl;
       
    }
}