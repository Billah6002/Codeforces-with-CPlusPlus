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

		if(n>=1900)
			cout << "Division 1" <<endl;

		else if(n>=1600)
			cout << "Division 2" <<endl;

		else if(n >= 1400)
			cout << "Division 3" <<endl;

		else
			cout << "Division 4" <<endl;
	}
}