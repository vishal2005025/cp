#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,j=0;
        cin>>a>>b;
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0;i<a;i++){
        m[s[i]]++;
        }
        
        for(auto i : m){
           if(m[i.first]%2!=0){
            j++;
           }
        }
        int d;
        if(j>=b&& j-b<=1) cout<<"YES"<<endl;
        else if(j>b&& j-b!=1) cout<<"NO"<<endl;
        else if(j<b && (b-j)%2<=1) cout<<"YES"<<endl;
        else if(j<b && (b-j)%2<!2) cout<<"NO"<<endl;
        
      }
    return 0;
}