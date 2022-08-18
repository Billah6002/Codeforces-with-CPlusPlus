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
		int a, b, c;
		cin>>a>>b>>c;

		int total = abs(a-b)*2;

		if(a>total || b>total || c>total)
		{
			cout<<-1<<endl;
			continue;
		}

		else
		{
			int dif = total/2;
			if(c+dif > total)
			{
				cout<<c+dif - total<<endl; 
			}
			else
				cout<<c+dif<<endl;
		}
	}
	return 0;
}