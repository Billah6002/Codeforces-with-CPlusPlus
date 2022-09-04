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
		int n;
		cin >> n;
		ll trac = 1;

		while(true)
		{
			if((1<<trac) > n)
			{
				cout <<(1<<trac-1)-1<<endl;
				break;
			}
			trac++;
		}
	}
}