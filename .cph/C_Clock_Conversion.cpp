#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='0' && s[1]=='0') cout<<"12:"<<s[3]<<s[4]<<" "<<"AM"<<endl;
        else if(s[0]=='0' && s[1]<='9') cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<" "<<"AM"<<endl;
        else if(s[0]=='1'&& s[1]<='1') cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<" "<<"AM"<<endl;
        else if(s[0]=='1'&&s[1]=='2') cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<" "<<"PM"<<endl;
        else if(s[0]=='1'&& s[1]<='9') cout<<"0"<<s[1]-'2'<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
        else if(s[0]=='2'&& s[1]=='0') cout<<"0"<<"8"<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
        else if(s[0]=='2'&& s[1]=='1') cout<<"0"<<"9"<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
        else if(s[0]=='2'&& s[1]=='2') cout<<"1"<<"0"<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
        else if(s[0]=='2'&& s[1]=='3') cout<<"1"<<"1"<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
      }
    return 0;
}