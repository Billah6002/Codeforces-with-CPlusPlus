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

		if(stoi(s)%2==0)
			std::cout << 0 << "\n";

		else if((s[0]-'0')%2==0)
			std::cout << 1 << "\n";

		else
		{
			bool flag = false;
			for(int i=0; i<s.size(); i++)
			{
				if((s[i]-'0')%2==0)
				{
					flag=true;
					break;
				}
			}
			if(flag)
				std::cout << 2 << "\n";

			else
				std::cout << -1 << "\n";
		}
	}
}