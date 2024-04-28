#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, g = 0, k = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        k = a[0];
        for (int i = 0; i < n; i++)
        {
            k = k % a[i];
        }

        sort(a, a + n);

        g = a[0];
        for (int i = 1; i < n; i++)
        {
            g = g % a[i];
        }
        if (k == 0)
        {
            if (g == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }

    }
}