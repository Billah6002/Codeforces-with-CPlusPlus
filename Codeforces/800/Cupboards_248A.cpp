#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int s1 = 0, s2 = 0, n;
	std::cin >> n;
	int t = n;

	while(t--)
	{
		int a, b;
		std::cin >> a >> b;

		s1+=a; s2+=b;
	}
	

	std::cout << std::min(s1, n-s1) + std::min(s2, n-s2)<< "\n";
}