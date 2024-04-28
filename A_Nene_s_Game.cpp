#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,m;
     cin>>n>>m;
     int a[n],b[m];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     for(int i=0;i<m;i++){
        cin>>b[i];
     }
     for(int i=0;i<m;i++){
        if(b[i]<a[0]) cout<<b[i]<<" ";
        else {
            cout<<a[0]-1<<" ";
        }
     }
     cout<<endl;
     
       
    }
    return 0;
}