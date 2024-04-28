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
        int a[n], sum = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        int c;
        c = sum % 3;
        if (c == 0)
        {
            cout << c << endl;
        }
        else if (c == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if ((sum - a[i]) % 3 == 0)
                {
                    cout << c << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << c + 1 << endl;
            }
        }
        else
        {
            cout << c - 1 << endl;
        }
    }
}