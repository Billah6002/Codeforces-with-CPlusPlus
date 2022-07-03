#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define test int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	
	int k;
	cin>>k;

	int arr[12];

	for(int i=0; i<12; i++)
	{
		cin>>arr[i];
	}
	if(k==0)
	{
		cout<<0<<endl;
		return 0;
	}
	sort(arr, arr+12);

	int sum=0, ans=0;
	bool flag=true;

	for(int i=11; i>=0; i--)
	{
		ans++;
		sum+=arr[i];

		if(sum>=k)
		{
			cout<<ans<<endl;
			flag=false;
			break;
		}
	}

	if(flag)
		cout<<-1<<endl;

}