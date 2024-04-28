#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,sum=0,rem=0;
        cin>>a>>b>>c;
        if(c!=1){
            cout<<"YES"<<endl;
            cout<<a<<endl;
            for(int i=0;i<a;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        } 
        else if(b==1) cout<<"NO"<<endl;
        else if(b==2&&a%2!=0){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
            cout<<a/2<<endl;
            if(a%2==0){
                for(int i=0;i<a/2;i++){
                    cout<<2<<" ";
                }
                cout<<endl;
            }
            else {
                  cout<<3<<" ";
            for(int i=0;i<a/2-1;i++){
                cout<<2<<" ";
            }
             cout<<endl;
            }
            
        }

    }
    return 0;
}