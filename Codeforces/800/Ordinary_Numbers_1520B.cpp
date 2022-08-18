#include <bits/stdc++.h>
#define push push_back
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
		string a;
		cin>>a;

		int x = a.length();
		int ans = 9*(x-1) + (a[0]-'0');

		bool flag = false;
		for(int i=1; i<a.length(); i++)
		{
			if(a[i]>a[0])
				break;

			else if(a[i]<a[0])
			{
				flag=true;
				break;
			}
		}

		if(flag)
		{
			cout<<ans-1<<endl;
		}
		else
			cout<<ans<<endl;

	}
	return 0;
}