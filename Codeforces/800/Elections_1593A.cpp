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
		int arr[3];
		cin>>arr[0]>>arr[1]>>arr[2];

		int mx = max(arr[0], max(arr[1],arr[2]));
		int count=0, idx;

		for(int i=0; i<3; i++)
		{
			if(arr[i]==mx)
			{
				idx=i;
				count++;
			}
		}

		if(count>1)
		{
			for(int i=0; i<3; i++)
				cout<<mx-arr[i]+1<<" ";
		}
		else
		{
			for(int i=0; i<3; i++)
			{
				if(i==idx)
					cout<<0<<" ";
				else
				cout<<mx-arr[i]+1<<" ";
			}
		}
		cout<<endl;

	}
	return 0;
}