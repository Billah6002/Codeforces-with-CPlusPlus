#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);


	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];

		for(int i=0; i<n; i++)
			cin>>arr[i];

		sort(arr, arr+n);
		int amax=arr[n-2], bmin=arr[n-1], ans=arr[n-1]-arr[n-2];
		for(int i=n-2; i>0; i--)
		{
			if(abs(arr[i]-arr[i-1]) < ans)
			{
				ans = abs(arr[i]-arr[i-1]);
				bmin=arr[i-1];
				amax=arr[i];
			}
		}
		cout<<ans<<endl;
	}
	
}