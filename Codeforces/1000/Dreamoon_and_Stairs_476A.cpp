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

	int n, m;
	cin >> n >> m;
	int mid = n/2;

	if(mid%2==1)
		mid++;

	if(n==0)
		cout << 0 <<endl;

	else if(m > n )
		cout  << -1 <<endl;

	else
	{
		
		int d = n/2;
		if(n%2==1)
			d++;

		if(d%m==0)
			cout << d <<endl;

		else
			cout << d + (m-d%m)<< endl;
		
	}
}