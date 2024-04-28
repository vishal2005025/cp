#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
     int n,e=0,f=0,g=0,h=0;
     cin>>n;
     int a[n],b[n],c[n],d[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
        e=e+a[i];
     }
     for(int i=0;i<n;i++){
        cin>>b[i];
        f=f+b[i];
     }
     for(int i=0;i<n;i++){
        cin>>c[i];
        g=g+c[i];
     }
     for(int i=0;i<n;i++){
        cin>>d[i];
        h=h+d[i];
     }
     if(e>g&&f>h) cout<<"A"<<endl;
     else if(e<g&&f<h) cout<<"P"<<endl;
     else cout<<"DRAW"<<endl;
    
    
    }
    return 0;
}