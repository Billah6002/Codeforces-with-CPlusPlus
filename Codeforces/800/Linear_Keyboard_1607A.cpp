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
		string lib, s;
		cin >> lib >> s;

		int init = lib.find(s[0]);
		int ans = 0;

		for(int i=1; i<s.length(); i++)
		{

			int nex = lib.find(s[i]);

			ans += abs(nex - init);
			init = nex;
		}

		cout << ans <<endl;
	}
}