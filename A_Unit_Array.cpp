#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n,b=0,c=0,flag=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                b++;
            }
            else c++;
        }
        while(!(b>=c&&c%2==0)){
            b++;
            c--;
            flag+=1;
        }
        cout<<flag<<endl;
        
    }
    return 0;
}