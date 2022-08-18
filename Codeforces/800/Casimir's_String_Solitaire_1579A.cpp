#include <bits/stdc++.h>
#define ph push_back
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int o=1; o<=t; o++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	Case
	{
		string s;
		cin>>s;

		int a=0, b=0, c=0;
		for(int i=0; i<s.length(); i++)
		{
			if(s[i]=='A')
				a++;

			else if(s[i]=='B')
				b++;

			else
				c++;
		}

		if(a+c==b)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}