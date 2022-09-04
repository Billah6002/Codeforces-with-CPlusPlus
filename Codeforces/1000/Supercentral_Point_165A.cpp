#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	std::pair<int,int> arr[n];

	for(int i=0; i<n; i++)
	{
		std::cin >> arr[i].first >> arr[i].second;
	}

	int ans = 0;

	for(int i=0; i<n; i++)
	{
		bool a1=false, a2=false, a3=false, a4=false;
		for(int j=0; j<n; j++)
		{
			if(arr[i].first==arr[j].first && arr[i].second >arr[j].second)
				a1=true;

			else if(arr[i].first==arr[j].first && arr[i].second <arr[j].second)
				a2=true;

			else if(arr[i].first>arr[j].first && arr[i].second == arr[j].second)
				a3=true;

			else if(arr[i].first<arr[j].first && arr[i].second == arr[j].second)
				a4=true;
		}
		if(a1 && a2 && a3 && a4)
			ans++;
	}
	std::cout << ans << "\n";
}