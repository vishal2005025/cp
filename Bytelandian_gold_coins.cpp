#include <bits/stdc++.h>
using namespace std;
#define int long long

int rec(int n){
    if(n>=12){
        return rec(n/2)+rec(n/3)+rec(n/4);
    }
    else return n;
  
}

signed main()
{
    int n;
    while(cin>>n){
     
    cout<<rec(n)<<endl;
    
    
    }
    return 0;
}