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
		int test[200]={0};

		for(int i=0; i<n; i++)
		{
			string s;
			cin>>s;

			for(int j=0; j<s.length(); j++)
			{
				int m = s[j];
				test[m]++;
			}

		}
		
		bool flag=true;

		for(int i=0; i<200; i++)
		{
			if(test[i]%n!=0)
			{
				cout<<"NO"<<endl;
				flag=false;
				break;
			}
		}
		if(flag)
		{
			cout<<"YES"<<endl;
		}
	}
}