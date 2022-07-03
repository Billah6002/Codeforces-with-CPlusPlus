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
		int w, h, n;
		cin>>w>>h>>n;

		if(n==1)
			cout<<"YES"<<endl;

		else
		{
			int co1=0, co2=0;

			while(h%2==0)
			{
				co1++;
				h/=2;
			}
			while(w%2==0)
			{
				co2++;
				w/=2;
			}
			int count1 = pow(2, co1);
			int count2 = pow(2, co2);

			if(count1 *count2 >=n)
			{
				cout<<"YES"<<endl;
			}
			else
				cout<<"NO"<<endl;
		}
	}
}