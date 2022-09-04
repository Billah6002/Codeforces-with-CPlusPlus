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

	unordered_map < string , string> mp;
	while(m--)
	{
		string s1, s2;
		cin >> s1 >> s2;

		mp[s1] = s2;
	}

	while(n--)
	{
		string lec ;
		cin >> lec;

		if(lec.length() > mp[lec].length())
			cout << mp[lec] << " ";

		else
			cout << lec << " ";
	}
}