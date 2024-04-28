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
        int a[]={1,3,6,10,15};
       int sum=0;
       int c=0,x=0;
       if(n==1 || n==3 || n==6 || n==10 || n==15){
        cout<<"1"<<endl;
       }
       
       else {
        for(int i=4;i>=0;i--){
                c=n/a[i];
                x=n%a[i];
                if(x!=0){
                     n=x;
                }
                sum=sum+c;
       }
       cout<<sum<<endl;

       }
    }
}