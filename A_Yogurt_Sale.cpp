#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
        cin>>a>>b>>c;
        int d,e,f;
        d=a*b;
        if(a%2==0){
           e=(a/2)*c;
        }
        else {
            e=(a/2)*c+b;
        }
        if(d>e) cout<<e<<endl;
        else cout<<d<<endl;
	}

}
