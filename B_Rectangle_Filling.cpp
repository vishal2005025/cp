#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        char s[n][m];
        string b="NO";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>s[i][j];
            }       
        }
        if(s[0][0]==s[n-1][m-1]||s[0][m-1]==s[n-1][0]) cout<<"YES"<<endl;
        else {
            if(s[0][0]==s[0][m-1]){
                for (int i=1;i<m-1;i++){
                    if(s[n-1][i]==s[0][0]) {
                       b="YES";
                        break;
                    }
                }
                cout<<b<<endl;
            }
            else if(s[0][0]==s[n-1][0]){
                for (int i=1;i<n-1;i++){
                    if(s[i][m-1]==s[0][0]) {
                       b="YES";
                        break;
                    }
                }
                cout<<b<<endl;
            }
           else  if(s[n-1][m-1]==s[n-1][0]){
                for (int i=1;i<m-1;i++){
                    if(s[0][i]==s[n-1][m-1]) {
                       b="YES";
                        break;
                    }
                }
                cout<<b<<endl;
            }
            else if(s[n-1][m-1]==s[0][m-1]){
                for (int i=1;i<n-1;i++){
                    if(s[i][0]==s[n-1][m-1]) {
                       b="YES";
                        break;
                    }
                }
                cout<<b<<endl;
            }
            

            
        }
     
    }
    return 0;
}