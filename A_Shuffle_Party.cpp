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
       int a[n+2]{0};
       for(int i=1;i<=n;i++){
         a[i]=i;
       }
       for(int i=2;i<=n;i++){
        for(int j=i-1;j>0;j--){
            if(a[i]%a[j]==0){
                int  temp=a[j];
                int  c=a[i];
                a[i]=a[temp];
                a[temp]=c;
              break;
            }
        }
        }
        
        for(int i=1;i<=n;i++){
            if(a[i]==1){
                cout<<i<<endl;
                break;
            }
        }
        
       
    }
    
}
       
    
