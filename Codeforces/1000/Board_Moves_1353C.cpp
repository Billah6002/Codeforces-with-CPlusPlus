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
		ll n;
		cin >> n;

		ll ans  =0, c = n/2;

		for(int i=8*c; i>2; i=8*c)
		{
			ans += i*c;
			c--;
		}
		cout << ans << endl;
	}
}