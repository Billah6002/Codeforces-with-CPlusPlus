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
		cin >> s;

		if(s.length() %2==1)
		{
			cout << "NO" <<endl;
			continue;
		}

		int len = s.length();

		if(s.substr(0,len/2)==s.substr(len/2))
			cout << "YES" <<endl;

		else
			cout << "NO" <<endl;

	}
}