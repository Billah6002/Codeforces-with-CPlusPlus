#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string s; int k, arr[26];
	std::cin >> s >> k;
	int ma = 0;

	for(int i=0; i<26; i++)
	{
		std::cin >> arr[i];
		if(arr[i] > ma) 
		ma = arr[i];
	}

	int ans  = 0;

	for(int i=0; i<s.length(); i++)
	{
		ans += arr[s[i]-'a'] * (i+1);

	}
	int t = s.length();
	for(int i=t+1; i<=t+ k; i++)
		ans += i*ma;
	std::cout << ans << "\n";

}