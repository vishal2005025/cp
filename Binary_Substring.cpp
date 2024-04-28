#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int l=0;
	    int b=0;
	    bool a=true;
	    
	    for(int i=0;i<n;i=i+2){
	        if((s[i]=='0'&&s[i+1]=='0')||(s[i]=='1'&&s[i+1]=='1')) {
	            l=l+2;
	        }
	        else if(a && s[i]=='0'&&s[i+1]=='1'){
	            l=l+2;
	            a=false;
	        }
	        else if(b<2&&s[i]=='1'&&s[i+1]=='0'){
	            l=l+1;
	            b++;
	        }
	    }
	    cout<<l<<endl;
	}

}
