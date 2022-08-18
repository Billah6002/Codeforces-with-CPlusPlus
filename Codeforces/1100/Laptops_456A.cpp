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

	int n;
	cin >> n;

	pair <int, int> p[n];

	for(int i=0; i<n; i++)
		cin >> p[i].first >> p[i].second;

	bool ans = true;
	sort(p, p+n);

	for(int i=0; i<n-1; i++)
	{
		if(p[i].second > p[i+1].second)
		{
			ans = false;
			break;
		}
	}
	if(ans)
		cout << "Poor Alex" <<endl;
	else
		cout << "Happy Alex" <<endl;

}