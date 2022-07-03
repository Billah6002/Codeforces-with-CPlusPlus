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

		int prev, ans=0;
		cin>>prev;

		for(int i=1; i<n; i++)
		{
			int next;
			cin>>next;

			int a = min(prev,next);
			int b=max(next,prev);

			while(2*a <b)
			{
				ans++;
				a*=2;
			}
			prev=next;
		}

		cout<<ans<<endl;

	}
}