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

		ll can[n], ora[n], mican = INT_MAX, miora=INT_MAX;

		for(int i=0; i<n; i++)
		{
			cin>>can[i];
			if(can[i]<mican)
				mican = can[i];
		}

		for(int i=0; i<n; i++)
		{
			cin>>ora[i];
			if(ora[i]<miora)
				miora = ora[i];
		}

		ll ans = 0;

		for(int i=0; i<n; i++)
		{
			int dif1 = can[i]-mican;
			int dif2 = ora[i]-miora;

			ans += max(dif1, dif2);
		}

		cout<<ans<<endl;
	}
	
}