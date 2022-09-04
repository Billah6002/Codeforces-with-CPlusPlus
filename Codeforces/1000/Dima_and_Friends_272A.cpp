#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	int sum = 0;
	for(int i=0; i<n; i++)
	{
		int temp;
		std::cin >> temp;

		sum+=temp;
	}

	int ans = 0;

	for(int i=1; i<6; i++)
	{
		if((sum+i)%(n+1)!=1)
			ans++;
	}
	std::cout << ans << "\n";
}