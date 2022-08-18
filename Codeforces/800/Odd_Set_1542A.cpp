#include <bits/stdc++.h>
#define ph push_back
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int o=1; o<=t; o++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	Case
	{
		int n, even=0, odd=0;
		cin>>n;

		for(int i=0; i<2*n; i++)
		{
			int temp;
			cin>>temp;

			if(temp%2==0)
			even++;

			else 
			odd++; 
		}
		
		if(even==odd)
			cout<<"YES"<<endl;

		else
			cout<<"NO"<<endl;
	}
	return 0;
}