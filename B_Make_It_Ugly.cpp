#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        if(s.size()==1)
        cout<<-1<<'\n';
        else
        {
            int x=0,y=INT_MAX;
            for(int i=0;i<n;i++)
            {
                if(a[i]==a[0])
                x++;
                else
                {
                    y=min(y,x);
                    x=0;
                }
            }
            y=min(y,x);
            int z=min(n,y);
            cout<<z<<'\n';
        }
    }
    
    return 0;
}