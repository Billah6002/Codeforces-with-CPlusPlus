#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define test int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	
	test
	{
		int n;
		cin>>n;

		if(n%4!=0)
		{
			cout<<"NO"<<endl;
			continue;
		}

		vector<int> arr;

		for(int i=0; i<n/2; i++)
			arr.push_back((i+1)*2);

		for(int i=1; i<n/2; i++)
			arr.push_back(2*i - 1);

		arr.push_back((n/2  + n/4)*2  - 1);

		cout<<"YES"<<endl;
		for(int i=0; i<arr.size(); i++)
			cout<<arr[i]<<" ";

		cout<<endl;
	}

}