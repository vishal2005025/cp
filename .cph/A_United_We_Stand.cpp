#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
      int n,temp=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      int m=0;
      sort(a,a+n);
      for(int i=0;i<n-1;i++)
      {
        if(a[i]==a[i+1]) m++ ;
      }
      
      int k=0;
     vector<int> d,e;
      for(int i=0;i<n/2;i++){
        d.push_back(a[k++]);
              }
      int j=k;
      for(int i=0;k<n;i++){
        e.push_back(a[k++]);
      }
      
      if (m==n-1) cout<<-1<<endl;
      else {
   cout<<d.size()<<" "<<e.size()<<endl;
      
     for(int i=0;i<n/2;i++){
        cout<<d[i]<<" ";
     }
     cout<<endl;
     for(int i=0;j<n;i++){
         cout<<e[i]<<" ";
          j++;
      }
      cout<<endl;
      }
      
    }
    return 0;
}