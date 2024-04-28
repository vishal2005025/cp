#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
     int n,k=0;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2) k++;
     }
     if(k%8==0) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    
    
    }
    return 0;
}