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
		int arr[3];

		cin >> arr[0] >> arr[1] >> arr[2];

		sort(arr, arr+3);

		if(arr[2] != arr[1])
			cout << "NO" <<endl;

		else
		{
			cout << "YES" <<endl;
			cout << arr[0] <<" "<< arr[0] <<" "<< arr[2] <<endl;
		}
	}
}