#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	int t;
	std::cin >> t;

	while(t--)
	{
		int n;
		std::cin >> n;

		int arr[n];

		for(int i=0; i<n; i++)
			std::cin >> arr[i];

		for(int i=0; i<n; i++)
		{
			int t;
			std::string s;
			std::cin >> t >> s;

			for(int j=0; j<t; j++)
			{
				if(s[j]=='U')
				{
					if(arr[i]==0)
						arr[i]=9;

					else
						arr[i]--;
				}
				else
				{
					if(arr[i]==9)
						arr[i]=0;

					else
						arr[i]++;
				}
			}
		}

		for(int i=0; i<n; i++)
			std::cout << arr[i] << " ";

		std::cout << "\n";
	}
}