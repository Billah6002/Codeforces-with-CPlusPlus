#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	std::string s;
	std::cin >> s;

	int ans = 0;

	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='Q')
		{
			for(int j=i+1; j<s.size(); j++)
			{
				if(s[j]=='A')
				{
					for(int k=j+1; k<s.size(); k++)
					{
						if(s[k]=='Q')
						{
							ans++;
						}
					}
				}
			}
		}
	}
	std::cout << ans << "\n";
}