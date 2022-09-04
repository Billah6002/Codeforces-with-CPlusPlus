#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	std::cin >> n >> m;
	int arr[n];

	for(int i=1; i<=n; i++)
	{
		std::cin >> arr[i];
	}

	int ans;
	while(true)
	{
		int count=0;
		for(int i=1; i<=n; i++)
		{
			if(arr[i] > 0)
			{
				count++;
				arr[i]-=m;
				ans = i;
			}
		}
		if(count <2)
			break;
	}
	std::cout << ans <<"\n";
}