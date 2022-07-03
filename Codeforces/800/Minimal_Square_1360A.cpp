#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);


	int t;
	cin>>t;

	while(t--)
	{
		int a, b;
		cin>>a>>b;
		int sqS = max(max(a, b), min(a, b)*2);

		cout<<sqS*sqS<<endl;
	}
	
}