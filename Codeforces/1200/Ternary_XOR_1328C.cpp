#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	Case
	{
		int n;
		cin>>n;

		string s, small, big;
		cin>>s;
		small.push_back('1');
		big.push_back('1');

		bool flag=true;

		for(int i=1; i<n; i++)
		{
			if(s[i]=='0')
			{
				small.push_back('0');
				big.push_back('0');
			}
			else if(s[i]=='1' && flag)
			{
				big.push_back('1');
				small.push_back('0');
				flag=false;
			}
			else if(s[i]=='1')
			{
				small.push_back('1');
				big.push_back('0');
			}

			else if(flag && s[i]=='2')
			{
				small.push_back('1');
				big.push_back('1');
			}
			else
			{
				small.push_back('2');
				big.push_back('0');
			}

		}

		cout<<big<<endl;
		cout<<small<<endl;
	}
}