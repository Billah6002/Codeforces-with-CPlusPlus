#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define mod 1000000007
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n, m;
		cin>>n>>m;

		int ans = (n*m)/2;

		if((n*m)%2==1)
			ans++;

		cout<<ans<<endl;
	}
}