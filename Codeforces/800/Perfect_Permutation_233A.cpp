#include <bits/stdc++.h>
#define ph push_back
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int o=1; o<=t; o++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin>>n;

	if(n%2==1)
	{
		cout<<-1<<endl;
		return 0;
	}

	else
	{
		for(int i=n; i>1; i--)
			cout<<i<<" ";
	}
	cout<<1<<endl;
	return 0;
}