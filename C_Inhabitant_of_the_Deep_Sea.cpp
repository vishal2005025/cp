#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int arr2[n+1];
        for (int i = 0; i < n; i =i+ 2)
        {
            arr2[i] = arr[i];
            arr2[i + 1] = arr[n - i];
        }
        int count = 0;
        if (k != 0)
        {
            for (int i = 0; i < n; i++)
            {
               if(arr2[i]==1){
                k=k-1;
                count++;
                
               }
                 else if (arr2[i] > arr2[i + 1])
                {
                    arr2[i] = arr2[i] - arr2[i + 1];
                    count++;
                    arr2[i + 1] = arr2[i];
                    arr2[i] = 0;
                    k = k - (2 * arr2[i + 1]);
                }
                else if (arr2[i + 1] > arr2[i])
                {
                    arr2[i + 1] = (arr2[i + 1] - arr2[i]);
                    k = k - (2 * arr2[i]);
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}