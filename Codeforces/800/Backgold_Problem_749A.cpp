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

	if(t%2==0)
	{
		cout<<t/2<<endl;
		
		for(int i=0; i<t/2; i++)
			cout<<2<<" ";
	}
	else
	{
		cout<<t/2<<endl;

		cout<<3;
		for(int i=1; i<t/2; i++)
			cout<<" "<<2;
	}
	
}