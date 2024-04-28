#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b=(n-1)/2;
        int c;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        c=a[b];
        int j=0,k=0,sum=0;
        for(int i=0;i<n;i++){
            if(a[i]==a[b]) j++;
        }
        sort(a,a+n);
        for(int i=0;i<b;i++){
            if(a[i]==a[b]) k++;
        }
        for(int i=b;a[i]!=c;i++){
            sum=sum+(c+1-a[i]);
        }
        int d=a[b];
        if(c<d) cout<<0<<endl;
        else if(c==d) {
            cout<<j-k<<endl;
        }
        else if(c>d){
            cout<<sum+j<<endl;
        }

      }
    return 0;
}