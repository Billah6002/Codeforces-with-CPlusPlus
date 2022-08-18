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

		int arr[n], ls=n-1;

		for(int i=0; i<n; i++)
			cin >> arr[i];

		for(int i=0; i<n/2; i++)
		{
			
			cout << arr[i] << " " << arr[ls] << " ";
			ls--;
			
		}
		if(n%2==1)
			cout << arr[n/2];
		cout <<endl;
	}
}