#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
       int n,sum=0,flag=0;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            flag+=1;
        }
        else {
            sum=max(sum,flag);
            flag=0;
        }
       }
        sum=max(sum,flag);
        cout<<sum<<endl;

    }
    return 0;
}