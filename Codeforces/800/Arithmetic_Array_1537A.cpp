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
		int n;
		cin>>n;

		int sum = 0;

		for(int i=0; i<n; i++)
		{
			int temp;
			cin>>temp;

			sum+=temp;
		}
		if(sum==n)
		{
			cout<<0<<endl;
		}
		else if(sum<n)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<sum-n<<endl;
		}

	}
}