#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define mod 1000000007
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;

	int arr[n];
	bool flag=false;

	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(arr[i]<0)
			flag=true;
	}
	if(flag==false)
	{
		cout<<0<<endl;
		return 0;
	}
	else
	{
		int ans=0;
		sort(arr, arr+n);
		for(int i=0; i<m; i++)
		{
			if(arr[i]>=0)
				break;
			
			ans+= arr[i]*(-1);
		}
		cout<<ans<<endl;
	}
}