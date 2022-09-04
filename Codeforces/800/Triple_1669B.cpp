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
		int n, ans;
		std::cin >> n;

		std::unordered_map <int, int> mp;
		bool flag = true;

		for(int i=0; i<n; i++)
		{
			int num;
			std::cin >> num;

			mp[num]++;
			if(mp[num]==3)
			{
				flag = false;
				ans = num;
			}
		}
		if(flag)
			std::cout << "-1" << "\n";

		else
			std::cout << ans << "\n";
	}
}