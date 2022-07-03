#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s;
	cin>>s;
	string ans;

	if(s[0]=='9')
	{
		ans.push_back('9');
	}
	else if(s[0]>'4')
	{
		int m=s[0];
		int y = 57-(m-48);
			
		ans.push_back(y);
	}
	else
		ans.push_back(s[0]);

	for(int i=1; i<s.length(); i++)
	{

		
		if(s[i]>'4')
		{
			int m=s[i];
			int y = 57-(m-48);
			
			ans.push_back(y);
		}
		else
			ans.push_back(s[i]);


	}

	cout<<ans<<endl;
}