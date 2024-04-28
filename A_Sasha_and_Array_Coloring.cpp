#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main() {
    int t;
    cin >> t;
    while (t--) {
       int n;
       cin>>n;
       int a[n];
       for (int  i = 0; i < n; i++)
       {
        cin>>a[i];
       }
       sort(a,a+n);
       int sum=0;
       for(int i=0;i<n;i++){
        sum=sum+ abs(a[i]-a[n-i-1]);
       }
       cout<<sum/2<<endl;
       
    }
    return 0;
}
