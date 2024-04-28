#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        for(auto i:m){
            sum+=i.second/3;
        }
        cout<<sum<<endl;
    }
    return 0;
}