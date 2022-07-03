#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int o=1; o<=t; o++)
using namespace std;

//int arr[100000];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	Case
	{
		int n;cin>>n;

		for(int i=2; i<32; i++)
		{
			int val=(1<<i)-1;

			if(n%val==0)
			{
				cout<<n/val<<endl;
				break;
			}
		}
	}
}