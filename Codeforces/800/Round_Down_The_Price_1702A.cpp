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

		int test = s.size();

		std::string ans;
		ans.push_back('1');
		test--;
		while(test--)
		{
			ans.push_back('0');
		}

		std::cout << stoi(s) - stoi(ans) << "\n";
	}
}