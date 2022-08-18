#include <bits/stdc++.h>
#define ph push_back
#define endl "\n"
#define ll long long int
#define Case int u;cin>>u;for(int o=1; o<=u; o++)
using namespace std;

bool prime(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
			return false;
	}

	return true;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >>m;
	if(!prime(m))
	{
		cout << "NO" <<endl;
		return 0;
	}

	for(int i=n+1; i<=m; i++)
	{
		if(prime(i) && i==m)
		{
			cout << "YES" <<endl;
			break;
		}
		else if(prime(i))
		{
			cout << "NO" <<endl;
			break;
		}

	}

}