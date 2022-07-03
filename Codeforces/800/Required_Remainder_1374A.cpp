#include <bits/stdc++.h>
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
		int x , y, n;
		cin>>x>>y>>n;

		if(n-n%x+y <= n)
			cout<<n-n%x+y<<endl;
		else
			cout<<n-n%x -(x-y)<<endl;
	}
}