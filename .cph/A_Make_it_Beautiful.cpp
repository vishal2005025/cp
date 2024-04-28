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
      sort(a,a+n);
      if(a[0]==a[n-1]){
        cout<<"NO"<<endl;
      }
      else {
        cout<<"YES"<<endl;
        if(a[1]==a[n-1]&&a[0]!=a[1]){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else {
              temp=a[0];
        a[0]=a[n-1];
        a[n-1]=temp;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        }
       
      }

      
    }
    return 0;
}