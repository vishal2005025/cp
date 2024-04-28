#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n,rem=0,sum=0;
        cin>>n;
        int num;
        num=n;
        while(num!=0){
           rem=num%10;
           num=num/10;
           if(rem>1) {
            sum++;
            break;
           }
        }
        if(sum==0) cout<<"YES"<<endl;
        else{
            
        }
      }
    return 0;
}