#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n-1; i++)
        {
            cin >> a[i];
           
        }
        for (int i = 0; i < n-1; i++)
        {
            sum=sum+a[i];
        }
        cout<<sum*(-1)<<endl;
        
    }
    return 0;
}