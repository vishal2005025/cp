#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k = 0, flag = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  int b=0;
    for (int j = 0; j < n-1; j++)
    {
      for (int i = j+1; i < n; i++)
      {
        b = __gcd(a[j], a[i]);
        if(b<=2) {
          k=1;
          cout<<"Yes"<<endl;
          break;
        }
      }
      if(k==1) break;
    }
    if(k==0) cout<<"No"<<endl;

  }
  return 0;
}