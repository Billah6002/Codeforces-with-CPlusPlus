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
	int n2 = n-1, n3 = n-2;

	int arr[n], brr[n-1], crr[n-2];

	for(int i=0; i<n; i++)
		cin >> arr[i];

	for(int i=0; i<n2; i++)
		cin >> brr[i];

	for(int i=0; i<n3; i++)
		cin >> crr[i];

	sort(arr, arr+n);
	sort(brr, brr+n2);
	sort(crr, crr+n3);

	for(int i=0; i<n2; i++)
	{
		if(brr[i]!=arr[i])
		{
			cout << arr[i] <<endl;
			break;
		}

		if(i==n2-1)
			cout << arr[n2] <<endl;
	}
	for(int i=0; i<n3; i++)
	{
		if(crr[i]!=brr[i])
		{
			cout << brr[i] <<endl;
			break;
		}

		if(i==n3-1)
			cout << brr[n3] <<endl;
	}
	
}