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
	int arr[50], sum=0;
	arr[0]=1;

	for(int i=1; i<50; i++)
	{
		arr[i]=sum + (i*(i+1)/2);
		sum = arr[i];

		if(sum > n)
			break;

	}

	for(int i=0; i<50; i++)
	{
		//cout << arr[i] <<" ";
		if(arr[i] > n)
		{
			cout << i-1 <<endl;
			break;
		}

	}

}