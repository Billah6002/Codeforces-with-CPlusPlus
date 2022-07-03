#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define test int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	
	int n;
	cin>>n;

	int ans = 0, curr=1, num=0;
	for(int i=0; i<n; i++)
	{
		int temp;
		cin>>temp;

		if(i>0 && temp>num)
		{
			curr++;
			num=temp;
		}
		else
		{
			curr=1;
			num=temp;
		}
		ans = max(ans, curr);
	}

	cout<<ans<<endl;

}