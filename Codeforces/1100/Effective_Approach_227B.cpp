#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	int arr[n], forw[n], bac[n];
	for(int i=1; i<=n; i++)
	{
		std::cin >> arr[i];
		forw[arr[i]]=i;
		bac[arr[i]]=n-i+1;
	}

	int q; ll fo = 0, ba = 0;
	std::cin >> q;

	while(q--)
	{
		int x;
		std::cin >> x;

		fo += forw[x];
		ba += bac[x];
	}

	std::cout << fo << " " << ba << "\n";

}