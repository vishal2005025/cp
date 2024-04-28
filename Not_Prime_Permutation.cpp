#include <bits/stdc++.h>
using namespace std;


int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,j;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(n<=2) cout<<-1<<endl;
        else {
            for(int i=0;i<n;i++){
                if(a[i]==1) j=i;
                ekle  if(a[i]==3) k=i;
            }
            swap(a[j],a[k]);
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        

    }
}
