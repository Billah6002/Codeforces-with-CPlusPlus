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

	if(n >= m) 
	{
		cout << n-m <<endl;
		return;
	}

	int ans =0 ;

	while(true)
	{
		ans++;
		if(m%2==0)
			m/=2;
		else if(m%2==1)
			m++;
		if(m < n)
		{
			ans+=n-m;
			break;
		}

		if(m==n)
			break;
	}
	cout << ans <<endl;
}

int main()
{
	solve();
	
}