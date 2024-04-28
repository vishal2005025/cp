#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=0;i<t;i++){
        a[i]=abs(a[i]);
    }
    sort(a,a+t);
    cout<<a[0]<<endl;
    return 0;
}