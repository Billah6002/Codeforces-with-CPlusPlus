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

	string s ="qwertyuiopasdfghjkl;zxcvbnm,./";

	char c ;
	cin >> c;
	string sh;

	cin >> sh;

	for(int i=0; i<sh.length(); i++)
	{
		for(int j=0; j<s.length(); j++)
		{
			if(sh[i]==s[j])
			{
				if(c=='R')
				{
					sh[i]=s[j-1];
				}
				else if(c=='L')
					sh[i]=s[j+1];

				break;
			}
		}
	}
	cout << sh <<endl;
}