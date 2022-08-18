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
		int a, b, c, d;
		cin>>a>>b>>c>>d;

		int ma=max(a, max(b, c));
		int dif = (ma-a)+(ma-b)+(ma-c);

		if(d<dif)
		{
			cout<<"NO"<<endl;
			continue;
		}
		//cout<<"dif = "<<dif<<endl;

		if((d-dif)%3==0)
			cout<<"YES"<<endl;

		else
			cout<<"NO"<<endl;
	}
	return 0;
}