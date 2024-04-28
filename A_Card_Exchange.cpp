#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,b,j=0;
        cin>>n;
        cin>>b;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        for(auto i:m){
           if(i.second>=b) {
            cout<<b-1<<endl;;
            j++;
            break;
           }
        }
        if(j==0) cout<<n<<endl;
    }
    return 0;
}