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

		int arr[n+1], idxmi, idxma;

		for(int i=1; i<=n; i++)
		{
			cin >> arr[i];

			if(arr[i]==1)
				idxmi = i;

			else if(arr[i]==n)
				idxma = i;
		}

		int mi = min(idxma, idxmi);
		int ma = max(idxma, idxmi);

		cout << min(ma , min(n+1-mi , mi+ n+1 -ma)) << endl;
	}
}