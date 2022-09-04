#include <bits/stdc++.h>
#define ll long long

bool check(std::string a, std::string b)
{
	int j=0, k = b.length();

	for(int i=0; i<a.length(); i++)
	{
		if(a[i]==b[j])
		{
			j++; 
		}
	}
	if(j==k)
		return true;

	return false;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	std::string s, sd;
	std::cin >> s >> sd;

	bool au = check(s, sd);

	sort(s.begin(), s.end());
	sort(sd.begin(), sd.end());


	if(s==sd)
		std::cout << "array\n";

	else if(au)
		std::cout << "automaton\n";

	else if(check(s,sd))
		std::cout << "both\n";

	else
		std::cout << "need tree\n";
}