#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum=1000000009;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n-1;i++)
        {
            sum=min(sum,a[i+1]-a[i]);
        }
        if(sum<0)
        cout<<0<<'\n';
        else
        cout<<(sum)/2 +1<<'\n';
        //cout<<sum<<'\n';
    }
    return 0;
}