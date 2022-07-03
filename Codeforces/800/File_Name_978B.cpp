#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin>>n;

	string s;
	cin>>s;
	vector<int> v;
	int curr=0, range=1;

	for(int i=0; i<n; i++)
	{
		if(s[i]=='x')
		{
			curr++;
		}
		else
		{
			v.push_back(curr);
			curr=0;
			range++;
		}
	}

	v.push_back(curr);

	int ans=0;

	for(int i=0; i<range; i++)
	{
		if(v[i]>=3)
		ans+=v[i]-2;
	}
	//cout<<endl;

	cout<<ans<<endl;
}