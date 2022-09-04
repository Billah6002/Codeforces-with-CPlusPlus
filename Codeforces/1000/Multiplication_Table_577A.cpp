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

	int n, x, ans = 0;
	cin >> n >> x;
	if(x<=n)
		ans++;

	for(int i=2; i<=n; i++)
	{
		if(x%i==0 && x/i <= n)
		{
			ans++;
		}

	}

	cout << ans << endl;
}