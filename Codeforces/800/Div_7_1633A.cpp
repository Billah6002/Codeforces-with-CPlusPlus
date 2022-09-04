#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	int t;
	std:: cin >> t;

	while(t--)
	{
		int n;
		std::cin >> n;

		if(n%7==0)
			std:: cout << n << "\n";

		else
		{
			for(int i=0; i<10; i++)
			{
				if((n-n%10 + i)%7==0)
				{
					std::cout << n-n%10 + i << "\n";
					break;
				}
			}
		}
	}
}