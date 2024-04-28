#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0, h = 0, flag = 0, x = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (!prime(n + 1))
        {
            for (int i = 0; i < n; i++)
            {
                cout << n + 1 - a[i] << " ";
            }
            cout << endl;
        }

        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    int c = a[i] + j;
                    if (!prime(c))
                    {
                        x = 0;
                        for (int n = 0; n < k; n++)
                        {
                            if (j == b[n])
                            {
                                x = 1;
                                break;
                            }
                        }
                        if (x != 1)
                            {
                                b[k++] = j;
                                break;
                            }
                    }
                    else
                        h++;
                }
                if (h == n)
                {
                    flag = 2;
                    break;
                }
                else
                    h = 0;
            }
            if (flag == 2)
                cout << -1 << endl;
            else
            {
                for (int i = 0; i < k; i++)
                {
                    cout << b[i] << " ";
                }
                cout << endl;
            }
        }
    }
}
