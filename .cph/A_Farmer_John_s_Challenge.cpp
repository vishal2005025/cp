#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
   int t;
   cin>>t;
   while(t--){
       int a,b;
       cin>>a>>b;
       if(b==1){
        for(int i=1;i<=a;i++){
            cout<<i<<" ";
        }
        cout<<endl;
       }
       else if(b==a){
        for(int i=1;i<=a;i++){
            cout<<1<<" ";
        }
        cout<<endl;
       }
       else cout<<-1<<endl;
        
   }
return 0;
}
