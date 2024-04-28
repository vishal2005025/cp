#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b, c = 0, flag = 0;
        cin >> n >> b;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // map<int,int>m;
        // for(int i=0;i<n;i++){
        //     m[a[i]]++;
        // }
        // for(auto i:m){
        //     c=i.first;
        //    if(c==b){
        //     // if(i.second==0){
        //         cout<<"YES"<<endl;
        //         flag=1;
        //         break;
        //    }
        // }
        //   if(flag==0){
        //     cout<<"NO"<<endl;
        //   }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b)
            {
                cout << "YES" << endl;
                flag=1;
                break;
            }   
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }

}}