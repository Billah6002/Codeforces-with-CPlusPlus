#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

string re(string s)
{
	string sub;

	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='(' && s[i+1]==')')
			i++;

		else
			sub.push_back(s[i]);
	}
	
	return sub;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin>>t;

	while(t--)
	{
		int n;
		string s;
		cin>>n>>s;

		while(true)
		{
			int curr=s.length();
			s=re(s);
			int up=s.length();

			if(curr==up)
				break;
		}

		cout<<s.length()/2<<endl;

	}
}