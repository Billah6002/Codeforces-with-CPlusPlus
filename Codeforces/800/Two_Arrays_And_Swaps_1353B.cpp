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
		int n, k;
		cin>>n>>k;
		int arr[n];
		int brr[n];

		for(int i=0; i<n; i++)
			cin>>arr[i];
		for(int i=0; i<n; i++)
			cin>>brr[i];
		sort(arr, arr+n);
		sort(brr, brr+n);
		reverse(brr, brr+n);

		int count=0, sum=0;
		bool flag = true;
		for(int i=0; i<n; i++)
		{
			if(arr[i]<brr[i] && flag==true && k>0)
			{
				count++;
				sum+=brr[i];
				if(count==k)
					flag=false;
			}
			else
				sum+=arr[i];
		}
		cout<<sum<<endl;
	}
	
}