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

		int arr[n];

		for(int i=0; i<n; i++)
			arr[i]=i+1;


		if(n%2==1)
			swap(arr[n/2], arr[0]);


		for(int i=n-1; i>=0; i--)
			cout << arr[i] <<" ";

		cout << endl;

	}
}