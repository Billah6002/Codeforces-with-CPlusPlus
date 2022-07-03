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
		int n,count=0;
		cin>>n;
		vector<int> misI;
		//vector<int> misJ;

		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];

			if(arr[i]%2 != i%2)
			{
				count++;
				misI.push_back(i);
			}
		}
		if(count%2==1)
		{
			cout<<-1<<endl;
		}
		else
		{
			int even=0, odd=0;
			for(int i=0; i<misI.size(); i++)
			{
				if(misI[i]%2==1)
				{
					odd++;
				}
				else
					even++;
			}
			if(odd==even)
			{
				cout<<even<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
		}
	}
	
}