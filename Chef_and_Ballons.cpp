#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a[3];
      for (int i = 0; i < 3; i++)
      {
         cin >> a[i];
      }
      sort(a, a + 3);
      int d;
      cin >> d;

      if (d <= a[0])
      {
         cout << (d - 1) * 3 + 1 << endl;
      }
      else if (d <= a[1])
      {
         cout << a[0] * 3 + (d - a[0] - 1) * 2 + 1 << endl;
      }
      else
      {
         cout << a[0] * 3 + (a[1]-a[0]) * 2 + d -a[1] << endl;
      }

      //    if (d<=a[0]) cout << 3*d-2;
      //    else if (d<=a[1]) cout << 2*d+a[0]-1;
      //    else cout << d+a[0]+a[1];
      //   cout << endl;
   }
   return 0;
}