#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,k=0;
     cin>>n;
     int a[n];
     map<int,int> m;
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     for(int i=0;i<n;i++){
      m[a[i]]++;
     }
     for(auto i :m){
        if(i.second==2)
          k++;     
     }
     cout<<k<<endl;
       
    }
    return 0;
}