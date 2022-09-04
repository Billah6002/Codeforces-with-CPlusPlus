#include <bits/stdc++.h>
#define ll long long

const int mod = 1000000007;

void mo(ll n)
{
	std::cout << (n+mod+mod)%mod << "\n";
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	ll x, y, n;
	std::cin >> x >> y >> n;

	ll arr[6] = {x-y, x, y, y-x, -x, -y};

	mo(arr[n%6]);
}