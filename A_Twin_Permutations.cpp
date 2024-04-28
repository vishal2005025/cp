#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp = 0,sum=0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum=max(sum,a[i]);
        }
        for(int i=0;i<n;i++)
        {
            cout<<sum-a[i]+1<<' ';
        }
        cout<<'\n';
    }
    return 0;
}