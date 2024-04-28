#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k=0,j=0;
       cin>>n;
        if(n%2!=0) cout<<"YES"<<endl;
        else {
           for(int i=0;n>2;i++){
            if(n%2!=0){
                cout<<"YES"<<endl;
                j++;
                break;
            }
            else {
                n=n/2;
            }
           }
           if(j==0) cout<<"NO"<<endl;

        }
        
       }
    return 0;
}