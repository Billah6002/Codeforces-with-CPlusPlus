#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	int t;
	std::cin >> t;

	while(t--)
	{
		int n, ans = 0;;
		std::cin >> n;
		std::unordered_set <int> m;

		for(ll i=1; i*i<=n; i++)
		{
			m.insert(i*i);

			if(i*i*i <=n)
				m.insert(i*i*i);
		}

		std::cout << m.size() << "\n";
	}
}