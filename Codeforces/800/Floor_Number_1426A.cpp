#include <bits/stdc++.h>
#define push push_back
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
		int n , x;
		cin>>n>>x;

		if(n<=2)
		{
			cout<<1<<endl;
			continue;
		}
		else
		{
			int ans = 1;
			n -=2;

			ans+=n/x;

			if(n%x!=0)
				ans++;

			cout<<ans<<endl;
		}
	}
	return 0;
}