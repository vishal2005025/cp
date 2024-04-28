#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,c=0;
        cin>>n;
        if(n<10){
            cout<<n<<endl;
        }
        else{
            int num=n;
            while(num){
                num=num/10;
               c++;
                
            }
            int j=n/(pow(10,c-1));

            cout<<9*(c-1)+j<<endl;
        }
    }
    return 0;
}