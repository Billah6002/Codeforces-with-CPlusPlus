#include <bits/stdc++.h>
#define ll long long

bool check(int a, int b, int k, int n)
{
	int cnt = 0;

	for(int i=0; i<n; i++)
	{
		if((a&(1<<i))!=(b&(1<<i)))
			cnt++;

		if(cnt > k)
			return false;
	}

	return true;
}


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int n, m, k;
	std::cin >> n >> m >> k;

	int arr[m];
	for(int i=0; i<m; i++)
		std::cin >> arr[i];

	int main;
	std::cin >> main;

	int ans = 0;

	for(int i=0; i<m; i++)
	{
		if(check(arr[i], main, k, n))
			ans++;
	}

	std::cout << ans << "\n";

}