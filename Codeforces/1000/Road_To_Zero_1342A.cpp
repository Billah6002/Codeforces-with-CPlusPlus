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
		ll x, y, a, b;
		cin >> x >> y >> a >> b;

		ll dif = abs(x-y);

		ll ans = dif*a;
		ll mi = min(x, y);

		if(2*a > b)
		{
			ans += mi*b;
		}
		else
			ans += mi*a*2;

		cout << ans <<endl;

	}
}