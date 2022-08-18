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

	int n, t;
	cin >> n >> t;

	int arr[n], idx=-1;

	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
		if(idx==-1 && arr[i]<=t)
		{
			idx=i;
		}
	}
	if(idx==-1)
	{
		cout << 0 <<endl;
		return 0;
	}
	//cout << idx <<endl;

	int ans = 1, sum=arr[idx], cur=1, id = idx, c;

	for(int i=idx+1; i<n; i++)
	{
		sum+=arr[i];
		cur++;
		if(sum >t)
		{
			cur--;
			sum-=arr[id];
			id++;
		}
		//cout << ans << " " << cur <<endl;
		ans = max(ans,cur);
	}
	cout << ans << endl;
}