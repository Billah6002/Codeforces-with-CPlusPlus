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
		int arr[7];
		for(int i=0; i<7; i++)
			cin>>arr[i];

		if(arr[0]+arr[1]==arr[2])
			cout<<arr[0]<<" "<<arr[1]<<" "<<arr[3]<<endl;

		else
			cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
	}
	return 0;
}