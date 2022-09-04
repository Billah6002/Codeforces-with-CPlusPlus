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

		int op = 0, on=0;
		for(int i=0; i<s.length(); i++)
		{
			if(s[i]=='1')
				op++;
			
			else
				on++;
		}

		int t = std::min(on, op);

		if(t%2==0)
			std::cout << "NET" << "\n";

		else
			std::cout << "DA" << "\n";
	}
}