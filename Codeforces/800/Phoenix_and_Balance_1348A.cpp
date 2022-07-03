#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int count(int n)

{
	int co=1;

	for(int i=n; i!=1; i)
	{
		co++;
		if(i%2==0)
		{
			i/=2;
		}
		else
		{
			i = i*3+1;
		}
	}
	return co;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cout<<count(22)<<endl;
}