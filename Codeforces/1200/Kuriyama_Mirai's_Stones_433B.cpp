#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	int n;
	std::cin >> n;

	ll arr[n+1], brr[n+1];
	arr[0] = 0; brr[0]=0;

	for(int i=1; i<=n; i++)
	{
		int t;
		std::cin >> t;
		arr[i]=t;
		brr[i]=t;
	}
	std::sort(brr, brr+n+1);

	for(int i=1; i<=n; i++)
	{
		arr[i] = arr[i] + arr[i-1];
		brr[i] = brr[i] + brr[i-1];
	}

	int q;
	std::cin >> q;

	while(q--)
	{
		int a, b, c;
		std::cin >> a >> b >> c;

		if(a==1)
			std::cout << arr[c] - arr[b-1] << "\n";

		else
			std::cout << brr[c] - brr[b-1] << "\n";
	}
}