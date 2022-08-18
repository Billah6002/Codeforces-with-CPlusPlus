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
	
	ll n , t;
	cin >> n >> t;
	
	ll arr[n];

	for(int i=1; i<n; i++)
		cin>>arr[i];

	bool flag = false;

	int i = 1;
	while(i<=t)
	{
		if(i==t)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		i+=arr[i];
	}
	
	cout<<"NO"<<endl;
	
}