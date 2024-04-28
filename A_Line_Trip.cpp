#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,sum=0;
       cin>>n;
       string s;
       cin>>s;
       int d[n],count=0,j=0;
       for(int i=0;i<n;i++){
if(s[i]=="."){
    count+=1;
}
else {
  c=count;
  count=0;
  c[j++]=c;
}
       }

       for(int i=0;i<j;i++){
        sum+=sum +(c[i]/2+1);
       }
       cout<<sum<<endl;
    }
}