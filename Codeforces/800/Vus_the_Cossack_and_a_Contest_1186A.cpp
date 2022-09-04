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

	int n, m, k;
	cin >> n >> m >> k;

	if(m < n || k < n)
		cout << "No" <<endl;

	else
		cout << "Yes" <<endl;
}