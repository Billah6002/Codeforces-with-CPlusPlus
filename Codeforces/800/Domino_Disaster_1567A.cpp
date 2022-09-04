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
		int n;
		std::cin >> n;
		std::string s;
		std::cin >> s;

		for(int i=0; i<n; i++)
		{
			if(s[i]=='U')
				s[i]='D';

			else if(s[i]=='D')
				s[i]='U';
		}

		std::cout << s << "\n";
	}
}