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
		int n, a, b, c, d;
		std::cin >> n >> a >> b >> c >> d;

		if((n*(a+b)>= c-d ) && (n*(a-b) <= c+d))
			std::cout << "Yes" << "\n";

		else
			std::cout << "No" << "\n";
	}
}