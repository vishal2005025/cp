#include <bits/stdc++.h>
using namespace std;


int main(){
    
int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
     c=c*10+a[i];
    }
    int b=20240401%c;
    cout<<b<<endl;
    }
    
    
     


    

