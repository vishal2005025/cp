#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, l, count = 0;
        cin >> a >> b >> l;
        int c[l]{0}, j = 0;
        if (l % a != 0 && l % b != 0)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 1; i <= l; i++)
            {
                if (l % i == 0)
                {
                    c[j++] = i;
                }
            }
            for (int i = 0; i < j; i++)
            {
                if ((c[i] * a) <= l || (c[i] * b) <= l)
                {
                    count += 1;
                }
            }
            cout << count << endl;
        }
    }
}