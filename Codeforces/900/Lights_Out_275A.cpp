#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int arr[3][3], brr[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			brr[i][j]=1;
			std::cin >> arr[i][j];
		}
	}

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(arr[i][j]%2==1)
			{
				brr[i][j]++;
				if(i>0) brr[i-1][j]++;
				if(i<2) brr[i+1][j]++;
				if(j>0) brr[i][j-1]++;
				if(j<2)	brr[i][j+1]++;
			}
		}
	}
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			std::cout << brr[i][j]%2;

		std::cout << "\n";
	}
}