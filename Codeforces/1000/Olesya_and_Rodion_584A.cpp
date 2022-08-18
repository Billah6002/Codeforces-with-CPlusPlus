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

	int n, t;
	cin >> n >> t;
	if(n==1 && t==10)
	{
		cout << -1 <<endl;
		return 0;
	}

	if(t==10)
	{
		cout << 1;
		n--;
		t=0;
	}
	for(int i=0; i<n; i++)
		cout << t;

	cout << endl;
}