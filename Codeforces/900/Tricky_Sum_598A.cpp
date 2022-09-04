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

	Case
	{
		ll n;
		cin >> n;

		ll ans = n*(n+1)/2;

		for(int i=0; (1<<i)<=n; i++)
		{
			ans -= 2*(1<<i);
		}
		cout << ans <<endl;
	}
}