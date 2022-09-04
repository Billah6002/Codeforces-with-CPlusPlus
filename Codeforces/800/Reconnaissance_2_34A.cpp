#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	int arr[n+1];

	for(int i=1; i<=n; i++)
		std::cin >> arr[i];

	int dif = abs(arr[n] - arr[1]), id1 = n, id2 = 1;

	for(int i=1; i<n; i++)
	{
		if(abs(arr[i]-arr[i+1]) < dif)
		{
			id1=i, id2=i+1;
			dif = abs(arr[i]-arr[i+1]);
		}
	}
	std::cout << id1 << " " << id2 << "\n";
}