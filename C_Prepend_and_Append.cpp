#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
       int n,flag=0,k=-1;
       cin>>n;
       string s;
       cin>>s;
       for (int i = 0; i < n/2; i++)
       {
        if((s[i]=='0'&&s[n-i-1]=='1') || (s[i]=='1' &&s[n-i-1]=='0') ){
               flag+=1;
        }
        else {
            k=i;
            break;
        }
       }
       if(k!=-1){
          cout<<n-k*2<<endl;
       }
       if(flag==n/2 ){
        if(n%2==0)
        cout<<0<<endl;
        else cout<<1<<endl;
       }
       
       
      
    }
    return 0;
}