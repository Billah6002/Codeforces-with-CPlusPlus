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
		unordered_map <int, int> mp;
		unordered_set <int> st;

		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin >> arr[i];
			st.insert(arr[i]);
			mp[arr[i]]++;
		}

		int high_count=0;

		for(auto i:mp)
		{
			if(i.second > high_count)
				high_count = i.second;
		}
		int t = st.size();

		cout << max(min(high_count , t-1), min(high_count-1, t)) <<endl;

	}
}