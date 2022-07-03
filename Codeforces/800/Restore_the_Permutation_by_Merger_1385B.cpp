#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define mod 1000000007
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		map <int, int> arr;
		//set<int>::iterator itr;
		int a[n];
		for(int i=0; i<2*n; i++)
		{
			int m;
			cin>>m;
			if(arr[m]==0)
			{
				cout<<m<<" ";
				arr[m]++;
			}
			
		}
   
		cout<<endl;
	}
}