#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       vector<int>v;
       v.push_back(a[0]);
       for(int i=1;i<n;i++){
        if(a[i-1]<=a[i]){
            v.push_back(a[i]);
        }

        else 
        {
            v.push_back(a[i]);
            v.push_back(a[i]);
        }
       }
       cout<<v.size()<<endl;
       for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}