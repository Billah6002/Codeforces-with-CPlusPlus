#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define case int t;cin>>t;for(int o=1; o<=t; o++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	
	case
	{
		int a, b, n;
		cin>>a>>b>>n;
		
		int ans=0;

		while(true)
		{
			if(a>b)
				b+=a;
			else
				a+=b;

			ans++;

			if(a>n || b>n)
				break;
		}

		cout<<ans<<endl;
	}

}