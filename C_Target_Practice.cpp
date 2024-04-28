#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[11][11];
        int sum=0;
        for(int i=1;i<11;i++){
            for(int j=1;j<11;j++){
                cin>>a[i][j];
                 if(a[i][j]=='X'){
                    if(((i==1||i==10)&&(1<=j<=10))||((j==1||j==10)&&(1<=i<=10))){
                        sum+=1;
                    }
                    else if(((i==2||i==9)&&(2<=j<=9))||((j==2||j==9)&&(2<=i<=9))){
                        sum+=2;
                    }
                    else if(((i==3||i==8)&&(3<=j<=8))||((j==3||j==8)&&(3<=i<=8))){
                        sum+=3;
                    }
                    else if(((i==4||i==7)&&(4<=j<=7))||((j==4||j==7)&&(4<=i<=7))){
                        sum+=4;
                    }
                    else if(((i==5||i==6)&&(4<j<7))||((j==5||j==6)&&(4<i<7))){
                        sum+=5;
                    }
                    
                 }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}