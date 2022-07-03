#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;

ll seri(ll n)
{
	return (n*(n-1)/2);
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll m , n;
	cin>>m>>n;

	ll min = m/n;

	ll rema = m%n;
	ll count = n-rema;

	ll minFri = count * seri(min)  + ( rema*seri(min+1));

	ll max = m-n+1;
	cout<<minFri<<" "<<seri(max)<<endl;
}