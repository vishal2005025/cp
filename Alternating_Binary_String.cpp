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
        int k = 0, j = 0, m = 0, f = 0;
        string s;
        cin >> s;
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] != '0')
            {
                k++;
            }
            if (s[i] != '1')
            {
                m++;
            }
        }
        for (int i = 1; i < n; i += 2)
        {
            if (s[i] != '1')
            {
                j++;
            }
            if (s[i] != '0')
            {
                f++;
            }
        }
        int d = k + j;
        int e = m + f;
        cout << min(d, e) << endl;
    }
    return 0;
}