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

	int arr[n+1];
	arr[0]=0;

	for(int i=1; i<=n; i++)
	{
		int x;
		cin >> x;

		arr[i] = arr[i-1] + x;
	}
	int m;
	cin >> m;

	while(m--)
	{
		int y;
		cin >> y;

		int st = 0, ed = n;
		while(true)
		{
			int mid = (st + ed)/2;

			if(arr[mid] >= y && arr[mid-1] < y)
			{
				cout << mid <<endl;
				break;
			}
			else if(arr[mid] > y)
				ed = mid-1;

			else if(arr[mid] < y)
				st = mid+1;
		}
	}
}