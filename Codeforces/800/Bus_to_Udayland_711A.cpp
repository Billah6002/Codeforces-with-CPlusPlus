#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	int n;
	std::cin >> n;

	std::string st[n];
	bool flag = true;

	for(int i=0; i<n; i++)
	{
		std::string s;
		std::cin >> s;

		if(flag)
		{
			if(s[0]=='O' && s[1]=='O')
			{
				flag = false;
				s[0]='+'; s[1]='+';
			}
			else if(s[3]=='O' && s[4]=='O')
			{
				s[3]='+'; s[4]='+';
				flag = false;
			}
		}
		st[i]=s;

	}

	if(flag)
		std::cout << "NO" << "\n";

	else
	{
		std::cout << "YES" << "\n";
		for(int i=0; i<n; i++)
			std::cout << st[i] << "\n";
	}
}