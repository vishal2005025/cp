#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
       int n,sum=0,flag;
       cin>>n;
       int a[n],b[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum^a[i];
        }
        for(int i=0;i<n;i++){
            b[i]=sum^a[i];
        }
        flag=b[0];
        for(int i=0;i<n-1;i++){
            flag=flag^b[i+1];
        }
        if(flag==0)
         cout<<sum<<endl;
         else cout<<-1<<endl;

    

    }
    return 0;
}