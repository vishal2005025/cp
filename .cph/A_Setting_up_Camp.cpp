#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int d=b%3;
         int e=c+d;
        if(d==0 && c%3==0) cout<<a+b/3+(c/3)<<endl;
        else if(d==0 && c%3!=0) cout<<a+b/3+(c/3+1)<<endl;
        else {
              if(e<3) cout<<-1<<endl;
              else if (e%3!=0)cout<<a+b/3+(e/3+1)<<endl;
              else if(e%3==0)cout<<a+b/3+e/3<<endl;
        }
      
        
        
      }
    return 0;
}