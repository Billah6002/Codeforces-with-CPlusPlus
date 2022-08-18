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
	bool ans = false;

	for(int i=0; i<5; i++)
	{
		string sh;
		cin >> sh;

		if(s[0]==sh[0] || s[1]==sh[1])
			ans = true;
	}
	if(ans)
		cout << "YES" <<endl;

	else
		cout << "NO" <<endl;
}