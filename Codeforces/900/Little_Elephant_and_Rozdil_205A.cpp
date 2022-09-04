#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, mi = INT_MAX, idx;
	std::cin >> n;
	bool flag = false;

	for(int i=0; i<n; i++)
	{
		int temp;
		std::cin >> temp;

		if(temp < mi)
		{
			mi = temp; idx = i+1; 
			flag = false;
		}
		else if(temp==mi)
		{
			flag = true;
		}
	}

	if(flag)
		std::cout << "Still Rozdil" << "\n";

	else
		std::cout << idx << "\n";

	
}