#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
   int t;
   cin>>t;
   while(t--){
       int a,b,d=0,k;
       cin>>a>>b;
       string s;
       cin>>s;
       k=b;
       for(int i=0;i<a;i++){
        if(s[i]=='1') {
              d++;
        }
       }
       if(b>=d){
        for(int i=0;i<a-b;i++){
            cout<<"0";
        }
        cout<<endl;
       }
       else {
        for(int i=0;i<a;i++){
             if(k<=0) break;
             if(s[i]=='1'){
                s[i]='0';
                k--;
             }
        }
        cout<<s<<endl;
       }

       
        
   }
return 0;
}
