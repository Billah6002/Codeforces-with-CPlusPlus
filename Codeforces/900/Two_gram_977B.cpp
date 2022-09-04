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

	int n;
	cin >> n;

	string s, ans="";
	cin >> s;

	umap <string, int> mp;

	for(int i=0; i<s.length()-1; i++)
	{
		string g;
		g.ph(s[i]);
		g.ph(s[i+1]);
		
		mp[g]++;

		if(mp[ans] < mp[g])
			ans = g;
	}

	cout << ans <<endl;
}