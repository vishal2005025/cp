#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[9];
        int x=0,y=0,z=0;
        for(int i=0;i<9;i++) cin>>a[i];
        for(int i=0;i<9;i++)
        {
            if(a[i]=='A')
            x++;
            if(a[i]=='B')
            y++;
            if(a[i]=='C')
            z++;
        }
        if(z!=3)
        cout<<'C'<<'\n';
        else if(y!=3)
        cout<<'B'<<'\n';
        else
        cout<<'A'<<'\n';
    }
}