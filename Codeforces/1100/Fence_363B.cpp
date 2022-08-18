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

	int n, k;
	cin >> n >> k;

	int arr[n];

	for(int i=0; i<n; i++)
		cin >> arr[i];

	int sum =0;

	for(int i=0; i<k; i++)
		sum+=arr[i];

	int ans = sum, idx=0;

	for(int i=1; i<=n-k; i++)
	{
		int ne = sum + arr[i+k-1] - arr[i-1];

		if(ne < ans)
		{
			idx=i;
			ans = ne;
		}

		sum = ne;

	}

	cout << idx + 1 <<endl;
}