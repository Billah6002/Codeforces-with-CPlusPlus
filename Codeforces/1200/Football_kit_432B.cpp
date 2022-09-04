#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int n; std::cin >> n;

	std::pair<int, int> s[n];
	std::unordered_map <int, int> home;

	for(int i=0; i<n; i++)
	{
		std::cin >> s[i].first >> s[i].second;

		home[s[i].first]++;
	}

	
	for(int i=0; i<n; i++)
	{
		std::cout << n-1 + home[s[i].second] << " " << n-1 - home[s[i].second] << "\n";
	}
}