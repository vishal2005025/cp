#include <bits/stdc++.h>
using namespace std;
#define int long
signed main()
{
  
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d;
        d = c / b;
        if (c >= b)
        {
            if (d < a)
                cout << int(d * pow(b, 2) + pow(c % b, 2)) << endl;
            else
                cout <<int( a * pow(b, 2) )+1 << endl;
        }
        else
            cout << pow(b, 2) << endl;
    }
}
