#include <bits/stdc++.h>
#define ph push_back
#define endl "\n"
#define ll long long int
#define Case int u;cin>>u;for(int o=1; o<=u; o++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	Case
	{
		ll n, m, x;
		cin>>n>>m>>x;

		ll ro = x%n;
		if(ro==0)
			ro=n;

		ll col = x/n;
		if(x%n!=0)
			col++;


		ll ans = (ro-1)*m + col;

		cout<<ans<<endl;
	}
	return 0;
}