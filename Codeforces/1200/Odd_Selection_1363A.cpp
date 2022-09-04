#include <bits/stdc++.h>
#define ph push_back
#define sint unordered_set<int>
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
		int n, x;
		cin >> n >> x;

		int odd = 0, even = 0;
		for(int i=0; i<n; i++)
		{
			int t;
			cin >> t;
			if(t%2==0)
				even++;
			else
				odd++;
		}

		if(x%2==0)
		{
			if(odd < x)
			{
				if(odd%2==1 || (even>x-odd && odd>0))
				cout << "Yes" <<endl;
				else
					cout << "No" <<endl;
			}

			else
			{
				if(even>0)
				cout << "Yes" <<endl;
				else
					cout << "No" <<endl;
			}
				

		}
		else
		{
			if(odd%2==1 || (odd>x-even && odd>0))
				cout << "Yes" <<endl;
			else
				cout << "No" <<endl;
		}
	}
}