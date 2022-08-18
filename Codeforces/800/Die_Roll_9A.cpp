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

	
	
	int n, k;
	while(cin>>n>>k)
	{

		//cin>>n>>k;
		int nu = 7- max(n,k);
		int de = 6;

		int g = __gcd(nu,de);
		cout<<nu/g<<"/"<<de/g<<endl;
	}

}