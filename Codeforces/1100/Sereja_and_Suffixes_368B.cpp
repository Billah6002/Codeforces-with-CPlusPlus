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

	int n, m;
	cin >> n >> m;

	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];

	int ans[n];
	unordered_set <int> st;

	for(int i=n-1; i>=0; i--)
	{
		st.insert(arr[i]);

		ans[i] = st.size();
		
	}

	while(m--)
	{
		int u;
		cin >> u;

		cout << ans[u-1] <<endl;
	}
}