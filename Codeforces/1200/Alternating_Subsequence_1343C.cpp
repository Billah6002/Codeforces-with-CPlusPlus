#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define test int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	
	test
	{
		int n;
		cin>>n;

		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		
		
		int l=0;
		int a[n];
		a[0]=arr[0];
		bool flag = true;

		if(arr[0]>0)
			flag=false;

		for(int i=1; i<n; i++)
		{
			if(flag==true)
			{
				if(arr[i]<0 && arr[i]>a[l])
				{
					a[l]=arr[i];
				}
				else if(arr[i]>0)
				{
					l++;
					a[l]=arr[i];
					flag=false;
				}
			}
			else
			{
				if(arr[i]>0 && arr[i]>a[l])
					a[l]=arr[i];

				else if(arr[i]<0)
				{
					l++;
					a[l]=arr[i];
					flag=true;
				}
			}
				
		}
		ll sum=0;

		for(int i=0; i<=l; i++)
		{
			sum+=a[i]*1ll;
		}
		cout<<sum<<endl;
		
		
	}

}