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
		std::string s;
		std::cin >> s;

		std::sort(s.begin(), s.end());

		std::cout << s << "\n";
	}
}