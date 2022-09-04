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
		int ans = 0;

		std::unordered_map <char, int> st;
		for(int i=0; i<s.size(); i++)
		{

			if(st[s[i]]==0||st[s[i]]==1)
			{
				ans++;
			}
			st[s[i]]++;
		}

		std::cout << ans/2 << "\n";
	}
}