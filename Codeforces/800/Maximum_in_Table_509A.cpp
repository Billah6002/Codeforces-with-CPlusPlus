#include <bits/stdc++.h>
#define ph push_back
#define endl "\n"
#define ll long long int
#define Case int u;cin>>u;for(int o=1; o<=u; o++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	int arr[n][n];

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==0 || j==0)
				arr[i][j]=1;
			else
			{
				arr[i][j]=arr[i-1][j] + arr[i][j-1];
			}
		}
	}

	cout << arr[n-1][n-1] <<endl;
}