#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	std::string s;
	std::cin >> s;

	int q;
	std:: cin >> q;

	while(q--)
	{
		int i, j, k;
		std::cin >> i >> j >> k;

		int dif = j-i+1;
		int cnt = k%dif;

		while(cnt--)
		{
			std::string c;
			c.push_back (s[j-1]);
			s.erase(j-1, 1);
			s.insert(i-1, c);
		}
	}
	std::cout << s << "\n";
}