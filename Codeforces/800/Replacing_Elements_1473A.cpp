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
		int n, d;

		cin>>n>>d;

		int arr[n], max=0;

		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			if(arr[i]>max)
			max=arr[i];
		}

		if(max <= d)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			sort(arr, arr+n);

			if(arr[0] + arr[1] <= d)
			{
				cout<<"YES"<<endl;
			}
			else
			cout<<"NO"<<endl;
		}

	}
	
}