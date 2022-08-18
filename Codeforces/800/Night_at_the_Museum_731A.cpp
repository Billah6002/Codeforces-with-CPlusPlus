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

	string s;
	cin >> s;

	int ans = 0;
	int ls = 0;

	for(int i=0; i<s.length(); i++)
	{
		int cur = s[i]-'a';

		ans += min(abs(cur-ls) , 26 -abs(cur-ls));
		ls = cur;
	}
	cout << ans <<endl;
}