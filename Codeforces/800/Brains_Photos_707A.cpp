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

	bool ans = true;

	int n, m;
	cin >> n >> m;

	for(int i=0; i<n*m; i++)
	{
		char c;
		cin >> c;

		if(c !='W' && c != 'B' && c!='G')
			ans = false;
	}

	if(ans)
		cout << "#Black&White" <<endl;
	else
		cout << "#Color" <<endl;
}