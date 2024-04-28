#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
       int n,a;
       cin>>n>>a;
       string s,t;
       cin>>s>>t;
       int flag=0;
       for(int i=0;i<a;i++){
         if(s.find(t)==0) {
            cout<<i<<endl;
            flag=1;
            break;
         }
         s=s+s;
       }
       if(flag==0){
        cout<<-1<<endl;
       }
       
      }
    return 0;
}