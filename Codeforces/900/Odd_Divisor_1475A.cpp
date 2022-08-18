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
		ll n;
		cin >> n;

		if((n&(n-1))==0)
        {
            cout << "NO" <<endl;
        }
        else{
            cout << "YES" <<endl;
        }
	}
}
