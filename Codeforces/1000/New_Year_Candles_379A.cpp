#include <bits/stdc++.h>
#define ph push_back
#define endl "\n"
#define ll long long int
#define Case int u;cin>>u;for(int o=1; o<=u; o++)
using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;

	int ans =0 ;

	while(n--)
	{
		ans++;
		if(ans%m==0)
			n++;
	}
	cout << ans <<endl;
}

int main()
{
	solve();
	
}