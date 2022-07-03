#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	Case
	{
		int n;
		cin>>n;
		
		int ans[n];

		for(int i=0; i<n; i++)
		{
			ans[i]=i+1;
		}
		
		for(int i=0; i<n-1; i+=2)
			swap(ans[i], ans[i+1]);

		if(n%2==1)
			swap(ans[n-2], ans[n-1]);

		for(int i=0; i<n; i++)
			cout<<ans[i]<<" ";

		cout<<endl;
	}
}