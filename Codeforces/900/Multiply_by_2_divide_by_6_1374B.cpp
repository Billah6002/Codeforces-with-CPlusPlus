#include <bits/stdc++.h>
#define ph push_back
#define endl "\n"
#define ll long long int
#define Case int u;cin>>u;for(int o=1; o<=u; o++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	Case
	{
		int n;
		cin >> n;

		int ans = 0;

		while(1)
		{
			if(n%3!=0 && n%6!=0)
				break;

			if(n%6==0)
				n/=6;

			else if(n%3==0)
				n*=2;
			ans++;

		}
		if(n==1)
			cout << ans <<endl;
		else
			cout << "-1" <<endl;
	}
}