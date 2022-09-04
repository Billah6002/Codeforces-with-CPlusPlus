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

	if(n==0)
	{
		cout << 1 <<endl;
		return 0;
	}

	int arr[4]={6,8,4,2};

	cout << arr[n%4] <<endl;
}