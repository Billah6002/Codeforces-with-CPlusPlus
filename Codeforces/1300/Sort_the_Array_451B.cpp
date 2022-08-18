#include <bits/stdc++.h>
#define ph push_back
#define endl "\n"
#define ll long long int
#define Case int u;cin>>u;for(int o=1; o<=u; o++)
using namespace std;

bool check(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		if(arr[i]>arr[i+1])
			return false;
	}
	return true;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];

	int l, r;
	bool flag = true;

	for(int i=0; i<n-1; i++)
	{
		if(arr[i]>arr[i+1])
		{
			if(flag)
				l=i;

			r=i+1;
			flag=false;
		}
		if(!flag && arr[i]<arr[i+1])
			break;

		if(i==n-2)
		{
			if(arr[i]>arr[i+1])
			{
			
				r=i+1;
			}
			break;
		}
	}

	int lim = r-l+1;
	int las = (l+r)/2;
	if(lim%2==0)
		las++;
	//cout << l << " " <<r <<endl;

	for(int i=l; i<las; i++)
		swap(arr[i],arr[r-i+l]);

	if(check(arr, n))
	{
		cout << "yes" <<endl;

		cout << l+1 <<" " << r+1 <<endl;
	}
	else
		cout << "no" <<endl;
}