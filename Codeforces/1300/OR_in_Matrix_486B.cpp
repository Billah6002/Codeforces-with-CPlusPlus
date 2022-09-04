#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int m, n;
	std::cin >> m >> n;
	int arr[m][n], a[m][n];
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			std::cin >> arr[i][j];
			a[i][j]=1;
		}
	}
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(arr[i][j]==0)
			{
				for(int k=0; k<n; k++)
					a[i][k]=0;

				for(int k=0; k<m; k++)
					a[k][j]=0;
			}
		}
	}

	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(arr[i][j]==1)
			{
				bool flag = false;
				for(int k=0; k<n; k++)
				{
					if(a[i][k]==1)
					{
						flag = true;
						break;
					}

				}
				for(int k=0; k<m; k++)
				{
					if(a[k][j]==1)
					{
						flag = true;
						break;
					}
				}
				if(!flag)
				{
					std::cout << "NO" << "\n";
					return 0;
				}
			}
		}
	}
	std::cout << "YES\n";
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			std::cout << a[i][j] << " ";

		std::cout << "\n";
	}
}