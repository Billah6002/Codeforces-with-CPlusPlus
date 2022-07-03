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
		int n, k;
		cin>>n>>k;

		if(k>=n)
		{
			if(k==n)
			{
				cout<<1<<endl;
			}
			else if(k%n==0)
			{
				cout<<k/n<<endl;
			}
			else
			{
				cout<<(k/n)+1<<endl;
			}
		}
		else
		{
			if(n%k==0)
				cout<<1<<endl;
			else
				cout<<2<<endl;
		}
	}
}