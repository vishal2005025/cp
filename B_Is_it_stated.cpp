#include <bits/stdc++.h>
using namespace std;


int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {int j=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='i' && s[i+1]=='t') {cout<<"YES"<<endl;j=1; break;}
            
        }
        if(j==0) cout<<"NO"<<endl;

    }
}
