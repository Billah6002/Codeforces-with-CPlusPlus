#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;

ll seri(ll n)
{
	return (n*(n-1)/2);
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	Case
	{
		int n;cin>>n;

		int arr[n];

		int sum=0;

		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}

		if(sum%n!=0)
			cout<<-1<<endl;

		else
		{
			int ans=0;
			int requare = sum/n;
			for(int i=0; i<n; i++)
			{
				if(arr[i]>requare)
					ans++;

			}

			cout<<ans<<endl;
		}
	}
}