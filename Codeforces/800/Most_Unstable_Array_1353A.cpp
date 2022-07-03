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
		int n, m;
		cin>>n>>m;

		cout<<min(2, n-1)*m<<endl;
	}
}