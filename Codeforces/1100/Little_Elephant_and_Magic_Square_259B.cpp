#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int arr[3][3]; int a[3], ma=INT_MIN;

	for(int i=0; i<3; i++)
	{
		int sum = 0;
		for(int j=0; j<3; j++)
		{
			std::cin >> arr[i][j];
			sum+=arr[i][j];
		}

		a[i]=sum;
		ma = std::max(sum, ma);
	}
	while(true)
	{
		ma++;
		int s=0;
		for(int i=0; i<3; i++)
		{
			s += ma - a[i];
		}

		if(s==ma)
			break;
	}

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(i==j)
			{
				std::cout << ma - a[i] << " ";
			}
			else
				std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}