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
		int n;
		cin>>n;

		int two = n/3;
		if(n%3!=0)
			two++;

		int one = n - (two*2);

		if(abs(one-two)==2)
		{
			one+=2;
			two--;
		}

		cout<<one<<" "<<two<<endl;
	}
}