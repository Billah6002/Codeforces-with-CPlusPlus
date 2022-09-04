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

	ll n;
	cin >> n;

	ll arr[n], ma = 0, mi = INT_MAX;

	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
		if(arr[i] > ma)
			ma = arr[i];
		if(arr[i] < mi)
			mi = arr[i];
	}

	ll max_dif = ma - mi, max_num = 0, min_num = 0;

	for(int i=0; i<n; i++)
	{
		if(arr[i]==ma)
			max_num++;

		if(arr[i]==mi)
			min_num++;

	}
	if(ma==mi)
	{
		cout << max_dif << " " << n*(n-1)/2 <<endl;
	}
	else
	cout << max_dif << " " << max_num * min_num <<endl;
}