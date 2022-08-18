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

	int n, mx =0;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
		if(arr[i] > mx)
		mx = arr[i];
	}

	int ans[mx+2];
	for(int i=0; i<=mx+1; i++)
	ans[i]=0;

	for(int i=0; i<n; i++)
	{
		ans[arr[i]]++;
	}

	int ans2[mx+2];
	ans2[0] = ans[0];

	for(int i=1; i<=mx; i++)
	{
		ans2[i] = ans2[i-1] + ans[i];
	}

	int q;
	cin >> q;

	while(q--)
	{
		int ask;
		cin >> ask;

		if(ask >= mx)
		cout << n << endl;

		else
		cout << ans2[ask] << endl;
	}
	
}