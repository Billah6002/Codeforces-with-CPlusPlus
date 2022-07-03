#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);


	int n;
	cin>>n;

	int arr[n];

	for(int i=0; i<n; i++)
		cin>>arr[i];

	int s =0, d=0, i=0, j=n-1;
	bool flag=true;
	while(i<=j)
	{
		if(flag==true)
		{
			if(arr[i]>=arr[j])
			{
				s+=arr[i];
				i++;
			}
			else
			{
				s+= arr[j];
				j--;
			}
			flag=false;
		}
		else
		{
			if(arr[i]>=arr[j])
			{
				d+=arr[i];
				i++;
			}
			else
			{
				d+= arr[j];
				j--;
			}
			flag=true;
		}

	}
	cout<<s<<" "<<d<<endl;
	
}