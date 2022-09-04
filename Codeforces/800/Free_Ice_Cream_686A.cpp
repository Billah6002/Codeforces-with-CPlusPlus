#include <bits/stdc++.h>
#define ph push_back
#define uset unordered_set
#define umap unordered_map
#define endl "\n"
#define ll long long int
#define Case int u;cin>>u;for(int o=1; o<=u; o++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll n, x;
	cin >> n >> x;

	int dis=0;

	while(n--)
	{
		char c; ll t;
		cin >> c >> t;

		if(c=='+')
			x+=t;

		else
		{
			if(t>x)
			{
				dis++;
				continue;
			}
			else
				x-=t;
		}
	}

	cout << x << " " << dis <<endl;
}