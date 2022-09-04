#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	int n;
	std::cin >> n;

	std::string ans[5] = { "Howard","Sheldon", "Leonard", "Penny", "Rajesh"};

	int i=0, cnt=0, dif = 1;

	while(i<n)
	{
		i+=dif;

		cnt++;
		if(cnt%5==0)
			dif*=2;
	}

	std::cout << ans[cnt%5] << "\n";
}