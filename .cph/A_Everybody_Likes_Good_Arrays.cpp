#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0, sum = 0, c = 0, d = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    c++;
                }
                else
                {
                    if (c > 1)
                    {
                        flag = flag + (c-1);
                        c = 0;
                    }
                    else
                        c = 0;
                }
            }
            if (c > 1)
            {
                flag = flag + (c-1);
            }

            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    d++;
                }
                else
                {
                    if (d > 1)
                    {
                        sum = sum + (d-1);
                        d = 0;
                    }
                    else
                        d = 0;
                }
            }
            if (d > 1)
            {
                sum = sum + (d-1);
            }

           cout<<flag+sum<<endl;
        }
    }
    return 0;
}