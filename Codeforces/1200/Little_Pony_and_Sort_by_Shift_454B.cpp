#include <bits/stdc++.h>
#define ll long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	int arr[n];
	for(int i=0; i<n; i++)
	{
		std::cin >> arr[i];
	}

	int idx=n-1;

	for(int i=0; i<n-1; i++)
	{
		if(arr[i] > arr[i+1])
		{
			idx = i;
			break;
		}
	}
	int a[n], id=0;
	

	for(int i=idx+1; i<n; i++)
	{
		a[id] = arr[i];
		id++;
	}
	for(int i=0; i<=idx; i++)
	{
		a[id] = arr[i];
		id++;
	}

	

	bool flag = true;

	for(int i=0; i<n-1; i++)
	{
		if(a[i] > a[i+1])
		{
			flag = false;
			break;
		}
	}
	if(flag)
		std::cout << n-idx-1 << "\n";

	else
		std::cout << -1 << "\n";
}