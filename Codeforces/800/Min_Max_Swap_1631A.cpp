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

		int arr[n], brr[n], max=INT_MIN;
		bool flag=true;

		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			{
				if(arr[i]>max)
				{
					max=arr[i];
				}
			}

		}
		for(int i=0; i<n; i++)
		{
			cin>>brr[i];

			if(brr[i]>max)
				flag=false;
		}
		//cout<<max<<endl;
		int max_a=INT_MIN, max_b=INT_MIN;

		for(int i=0; i<n; i++)
		{
			if(flag)
			{
				if(arr[i]<brr[i])
				{
					if(arr[i]>max_b)
						max_b=arr[i];

					if(brr[i]>max_a)
						max_a = brr[i];
					//cout<<max_a<<endl<<max_b<<endl;

					//swap(arr[i],brr[i]);

				}
				else
				{
					if(arr[i]>max_a)
						max_a=arr[i];

					if(brr[i]>max_b)
						max_b = brr[i];
					//cout<<max_a<<endl<<max_b<<endl;

				}
			}

			else
			{
				if(arr[i]>brr[i])
				{
					if(arr[i]>max_b)
						max_b=arr[i];

					if(brr[i]>max_a)
						max_a = brr[i];
					
					//cout<<max_a<<endl<<max_b<<endl;

				}
				else
				{
					if(arr[i]>max_a)
						max_a=arr[i];

					if(brr[i]>max_b)
						max_b = brr[i];
					//cout<<max_a<<endl<<max_b<<endl;

				}
			}
			//cout<<endl;
		}

		cout<<max_a*max_b<<endl;
	}
}