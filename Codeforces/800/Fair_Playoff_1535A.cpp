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
		int a, b, c, d;

		cin >> a >> b >> c >> d;

		if(max(a,b) > min(c,d) && max(c,d)>min(a,b))
			cout << "YES" <<endl;
		else
			cout << "NO" <<endl;
	}
}