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
		string s;
		char c;
		cin >> s >> c;

		bool flag = false;

		for(int i=0; i<s.size(); i++)
		{
			if(s[i]==c && i%2==0)
			{
				flag = true;
				break;
			}
		}
		if(flag)
			cout << "YES" <<endl;

		else
			cout << "NO" <<endl;
	}
}