#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int q;
    cin >> q;
    while (q>0)
    {
        int n, sum = 0;
        cin >> n;
        string s;
        cin >> s;
        int count = 0, j = 0,k=0;
        for (int i = 0; i < n;i++)
        {
            if (s[i]=='.'){
                count+=1;
            }
        }
         for (int i = 0; i < n;i++){
           if (s[i]=='.'){
                j+=1;
                if(k<j){
                k=j;
            }
           }
         else {
            j=0;
           }
         }
    if(k<=2){
       cout<<count<<endl;
    }
    else cout<<"2"<<endl;
    q--;
    }
}