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

		int arr[n], odd=0, even=0;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			if(arr[i]%2==0)
				even++;
			else
				odd++;
		}
		if(odd%2==0 && even%2==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			sort(arr, arr+n);
			int count=0;

			for(int i=1; i<n; i++)
			{
				if((arr[i]-arr[i-1]==1) && (arr[i]%2!=arr[i-1]%2))
					count++;
			}

			if(count>0)
			{
				cout<<"YES"<<endl;
			}
			else
				cout<<"NO"<<endl;
		}

	}
}