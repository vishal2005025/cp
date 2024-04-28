#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
   int t;
   cin>>t;
   while(t--){
       int a,b,c,j=0;
       cin>>a>>b>>c;
       int d[b];
       for(int i=0;i<b;i++){
        cin>>d[i];
       }
       sort(d,d+n);
       for(int i=1;i<b;i++){
        if(d[i]-d[i-1]==2) j++;
       }
       if(b==a) cout<<a-2<<endl;
       else {
        cout<<a-2-(a-b)<<endl;
       }
       
   }
return 0;
}
