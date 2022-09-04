#include <bits/stdc++.h>
#define ph push_back
#define sint unordered_set<int>
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

		sint st;

		for(int i=0; i<n; i++)
		{
			char c;
			cin >> c;
			st.insert(c);
		}
		cout << st.size() * 2 + (n-st.size()) <<endl;
	}
}