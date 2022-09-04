#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	std::string a, b;
	std::cin >> a >> b;
	int i, j = 0;

	for(i=0; i<a.size(); i)
	{
		if(a[i]==b[j])
		{
			j++;
			i++;
		}

		else
			j++;

		if(j==b.size())
			break;
	}

	std::cout << i+1 << "\n";
}