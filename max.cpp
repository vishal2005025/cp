#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
   int n;
   cin>>n;
   int a[n],maxi=INT_MIN;
   for(int i=0;i<n;i++){
   cin>>a[i];
   if(a[i]>maxi) maxi=a[i];
   }
   int k=INT_MIN;
   for(int i=0;i<n;i++){
      if(a[i]>k&&a[i]!=maxi) k=a[i];
   }
   cout<<maxi+k;

   
   return 0;
}