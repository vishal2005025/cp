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
        string s;
        cin >> s;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                j++;
            }
        }
        if (j == n)
        {
            for (int i = 0; i < n; i++)
            {
                if (i != n - 1)
                {
                    cout << "IDK" << endl;
                }
                else
                    cout << "YES" << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    for (int m = i; m < n; m++)
                    {
                        cout << "NO" << endl;
                    }
                    break;
                }
                else
                    cout << "IDK" << endl;
            }
        }
    }
    return 0;
}