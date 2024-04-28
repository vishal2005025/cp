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
        cin >> n;
        int a[n], temp = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int j=0;j<n;j++){
for (int i = 1; i < n - 1; i++)
        {
            if (a[i - 1] < a[i] && a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        }
        
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                // cout<<"no"<<endl;
                flag += 1;
            }
        }
        if (flag == n - 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}