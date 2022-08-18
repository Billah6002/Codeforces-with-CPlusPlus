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

		int count = 1, ans=1;
		
		for(int i=1; i<n; i)
		{
			count++;

			if(count%3==0 || count%10==3)
			{
				continue;
			}
			else
			{
				i++;
			}
		}

		cout << count <<endl;
	}	
}