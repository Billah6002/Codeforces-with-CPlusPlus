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

	int ans =0;

	for(int i=1; i<=n/2; i++)
	{
		if((n-i)%i==0)
			ans++;
	}
	cout << ans <<endl;
}