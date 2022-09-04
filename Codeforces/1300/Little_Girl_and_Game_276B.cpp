#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	std::string s;
	std::cin >> s;

	std::unordered_map <char, int> mp;
	for(auto i:s)
		mp[i]++;

	int ch = 0;
	for(auto i:mp)
	{
		if(i.second%2==1)
			ch++;
	}
	if(ch%2==1 || ch==0)
		std::cout << "First\n";

	else
		std::cout << "Second\n";
}