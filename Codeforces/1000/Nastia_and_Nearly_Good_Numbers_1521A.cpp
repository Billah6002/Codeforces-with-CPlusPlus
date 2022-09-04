#include <bits/stdc++.h>
#define ph push_back
#define uset unordered_set
#define umap unordered_map
#define endl "\n"
#define ll long long int
#define Case int u;cin>>u;for(int o=1; o<=u; o++)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	Case
	{
		ll a, b;
		cin >> a >> b;

		if(b==1)
			cout << "NO" <<endl;

		else
		{
			cout << "YES" <<endl;
			cout << a << " " << a*b <<" " << a*(b+1) <<endl;
		}
	}
}