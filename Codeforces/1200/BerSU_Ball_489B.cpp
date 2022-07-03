#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);


	int n;
	cin>>n;
	int boy[n];

	for(int i=0; i<n; i++)
		cin>>boy[i];

	sort(boy, boy+n);

	int m;
	cin>>m;

	int girl[m];
	for(int i=0; i<m; i++)
		cin>>girl[i];

	sort(girl, girl+m);

	int ans=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(abs(boy[i]-girl[j]) <=1)
			{
				ans++;
				girl[j]=150;
				break;
			}
		}
	}

	cout<<ans<<endl;
}