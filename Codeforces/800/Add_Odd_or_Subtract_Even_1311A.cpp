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
		int n, m;
		cin>>n>>m;

		if(n==m)
		{
			cout<<0<<endl;
		}
		else if(n%2==m%2)
		{
			if(n>m)
			{
				cout<<1<<endl;
			}
			else
			{
				cout<<2<<endl;
			}
		}
		else
		{
			if(n>m)
			{
				cout<<2<<endl;
			}
			else
			{
				cout<<1<<endl;
			}
		}
	}
}