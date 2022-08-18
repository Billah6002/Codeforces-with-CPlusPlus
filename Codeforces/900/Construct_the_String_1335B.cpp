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

	Case
	{
		int n, a, b;
		cin >> n >> a >> b;

		string ans;
		char c = 'a';

		for(int i=1; i<=n; i++)
		{
			ans.ph(c);
			c++;

			if(i%b==0)
				c='a';
		}
		cout << ans <<endl;
	}
}