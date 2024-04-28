#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a=0,b=0;
        cin>>n;
        for(int i=0;i<(2*n);i+=2){
             b=i/2;
            if(b%2==0){
               for(int j=0;j<(2*n);j+=2){
                a=j/2;
               if(a%2==0) {
                cout<<"#"<<"#";
               }
               else cout<<"."<<".";
            }
            cout<<endl;
            for(int j=0;j<(2*n);j+=2){
                a=j/2;
               if(a%2==0) {
                cout<<"#"<<"#";
               }
               else cout<<"."<<".";
            }
             cout<<endl;
            }
            else {
                for(int j=0;j<(2*n);j+=2){
                a=j/2;
               if(a%2==0) {
                cout<<"."<<".";
               }
               else cout<<"#"<<"#";
            }
            cout<<endl;
            for(int j=0;j<(2*n);j+=2){
                a=j/2;
               if(a%2==0) {
                cout<<"."<<".";
               }
               else cout<<"#"<<"#";
            }
             cout<<endl;

            }
            
        }     
      }
    return 0;
}