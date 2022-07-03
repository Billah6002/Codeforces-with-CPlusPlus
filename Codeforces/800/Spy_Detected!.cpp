#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        if(arr[1]!=arr[2] && arr[1]!=arr[3])
        cout<<1<<endl;
        for(int i=2; i<n; i++)
        {
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1])
            {
                cout<<i<<endl;
            }
        }
        if(arr[n]!=arr[n-1] && arr[n] != arr[n-2])
        cout<<n<<endl;
    }
    return 0;
}