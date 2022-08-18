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
		string s;
		cin >> s;

		int sum1=0, sum2=0;

		for(int i=0; i<6; i++)
		{
			if(i<3)
				sum1+=s[i]-'0';
			else
				sum2+=s[i]-'0';
		}
		if(sum1==sum2)
			cout << "YES" <<endl;
		else
			cout << "NO" <<endl;
	}
}