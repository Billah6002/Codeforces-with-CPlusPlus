#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin>>t;

	while(t--)
	{
		int h, n, m;
		cin>>h>>n>>m;
		if(h<=(m*10))
		{
			cout<<"YES"<<endl;
			continue;
		}
		bool flag=false;

		while(n--)
		{
			h = (h/2)+10;
			if(h<=(m*10))
			{
				flag=true;
				break;
			}
			//cout<<h<<endl;

			
		}

		if(flag)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
}