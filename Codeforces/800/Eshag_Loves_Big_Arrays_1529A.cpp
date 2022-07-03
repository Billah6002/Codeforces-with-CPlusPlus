#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	Case
	{
		int n;
		cin>>n;

		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		
		int minAvg = INT_MAX;

		for(int i=0; i<n; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				if((arr[i]+arr[j])/2 < minAvg)
					minAvg=(arr[i]+arr[j])/2 ;
			}
		}
		int ans=0;

		for(int i=0; i<n; i++)
		{
			if(arr[i]>minAvg)
				ans++;
		}

		cout<<ans<<endl;
	}
}