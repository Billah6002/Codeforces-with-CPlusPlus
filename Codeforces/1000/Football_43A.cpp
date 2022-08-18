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

	map <string, int> mp;
	string ans;

	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;

		mp[s]++;
		if(mp[s] > mp[ans])
		{
			ans = s;

		}
	}

	cout << ans <<endl;
}