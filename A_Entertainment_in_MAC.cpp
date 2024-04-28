#include <bits/stdc++.h>
#include<string>
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
        string a;
        cin >> a;
        string b;
        b = a;
        int c = a.length() - 1;
        reverse(a.begin(), a.end());
           
            // if (n % 2 == 0)
            // {
            //     cout << b << endl;
            // }
            // else{
            //      cout <<  a << endl;
            // }
            if(b<=a)
            cout<<b<<'\n';
            else
            cout<<a+b<<'\n';
    }
}