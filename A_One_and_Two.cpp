#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, sum = 0,b=0,flag=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] == 2)
      {
        sum++;
      }
    }
    if(sum%2!=0){
      cout<<-1<<endl;
    }
    else {

       for(int i=0;i<n;i++){
         if(a[i]==2){
          b++;
          if(b==(sum-b)){
            cout<<i+1<<endl;
            flag=1;
            break;
          }
         }
       }
       if(flag==0){
        cout<<1<<endl;
       }
    }
    
  }
  return 0;
}