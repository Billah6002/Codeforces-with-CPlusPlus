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
		int n;

		cin>>n;

		int x;
		if(n>1000)
			x=10;
		else if(n>100)
			x=6;
		else if(n>10)
			x=3;
		else
			x=1;

		cout<<10*((n%10) - 1) + x<<endl;
	}

}