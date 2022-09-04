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
		int a[3];
		std::cin >> a[0] >> a[1] >> a[2];

		std::sort(a, a+3);

		if(a[0]+a[1] == a[2])
			std::cout << "YES" << "\n";

		else if(a[0]==a[1] && a[2]%2==0)
			std::cout << "YES" << "\n";

		else if(a[1]==a[2] && a[0]%2==0) 
			std::cout << "YES" << "\n";

		else 
			std::cout << "NO" << "\n";
	}
}