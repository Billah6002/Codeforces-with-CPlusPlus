#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int n, s, t;
	std::cin >> n >> s >> t;

	int arr[n+1];
	for(int i=1; i<=n; i++)
		std::cin >> arr[i];

	if(s == t)
	{
		std::cout << 0 << "\n";
		return 0;
	}
	int ans = 0; bool flag = false;
	std::unordered_map <int, int> mp;
	while(true)
	{
		ans++;
		mp[arr[s]]++;
		if(mp[arr[s]]==2)
		{
			flag = true;
			break;
		}

		if(arr[s]==t)
			break;
		s=arr[s];
	}
	if(flag)
		std::cout << -1 << "\n";

	else
		std::cout << ans << "\n";
}