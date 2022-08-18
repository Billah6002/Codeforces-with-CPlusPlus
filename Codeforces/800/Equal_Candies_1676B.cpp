#include <bits/stdc++.h>
#define ph push_back
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int o=1; o<=t; o++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	Case
	{
		int n;
		cin>>n;

		int arr[n], mi=INT_MAX, ans=0;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			if(arr[i]<mi)
				mi=arr[i];
		}
		for(int i=0; i<n; i++)
			ans+=arr[i]-mi;

		cout<<ans<<endl;
	}
	return 0;
}