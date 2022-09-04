#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	int a, b;
	std::cin >> a >> b;

	int x = std::min(a, b);
	ll ans = 1;

	for(int i=1; i<=x; i++)
		ans*=i;


	std::cout << ans << "\n";
}