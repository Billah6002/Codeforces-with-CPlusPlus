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
		int a, b;
		cin>>a>>b;

		int t=24*60;

		cout<<t-(60*a +b)<<endl;
	}
	return 0;
}