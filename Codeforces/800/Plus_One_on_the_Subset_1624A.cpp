#include <bits/stdc++.h>
#define push push_back
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

		int mi=INT_MAX, ma=INT_MIN;

		for(int i=0; i<n; i++)
		{
			int temp;
			cin>>temp;

			if(temp>ma)
			{
				ma=temp;
			}
			if(temp<mi)
				mi=temp;
		}

		cout<<ma-mi<<endl;
	}

}