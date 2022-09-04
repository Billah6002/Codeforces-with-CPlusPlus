#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	int arr[8];
	for(int i=1; i<8; i++)
		std::cin >> arr[i];

	int curr = 0;

	for(int i=1; i<8; i++)
	{
		curr+=arr[i];

		if(curr>=n)
		{
			std::cout << i << "\n";
			break;
		}
		if(i==7)
			i=0;
	}
}