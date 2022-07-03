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

		int arr[n], one=0;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			if(arr[i]==1)
				one++;
		}
		
		if(one==1)
			cout<<0<<endl;

		else
		{
			int curr=0, ans=0;
			bool flag=false;

			for(int i=0; i<n; i++)
			{
				if(arr[i]==1)
				{
					flag=true;
					ans+=curr;
					curr=0;
				}

				if(arr[i]==0 && flag)
					curr++;


			}
			cout<<ans<<endl;
		}
	}
}