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
		int a1, a2, b1, b2, c1, c2;
		cin>>a1>>a2>>b1>>b2>>c1>>c2;

		int ans = abs(a1-b1) + abs(a2-b2);

		if((a1==b1 && a1==c1 && c2>min(a2,b2) && c2<max(b2,a2)) || (a2==b2 && a2==c2 && c1>min(a1,b1) && c1<max(b1,a1)))
			ans+=2;


		cout<<ans<<endl;
	}
	return 0;
}