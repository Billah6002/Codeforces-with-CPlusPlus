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

		int one=0, two=0;

		for(int i=0; i<n; i++)
		{
			int temp;
			cin>>temp;
			if(temp==1)
				one++;
			else
				two++;
		}

		if(one%2==0 && two%2==0)
		{
			cout<<"YES"<<endl;
		}
		else if(one%2==0 && two%2==1 && one>0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	
}