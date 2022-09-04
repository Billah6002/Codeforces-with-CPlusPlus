#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int n;
	std::cin >> n;

	int arr[n];

	for(int i=0; i<n; i++)
		std::cin >> arr[i];

	int ans = arr[0]+1;

	for(int i=1; i<n; i++)
	{
		ans+= abs(arr[i]-arr[i-1]) + 2;
	}

	std::cout << ans << "\n";
}