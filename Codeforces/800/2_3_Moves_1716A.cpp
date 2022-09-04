#include <bits/stdc++.h>
#define ph push_back
#define uset unordered_set
#define umap unordered_map
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

		if(n%3==0)
			cout << n/3 <<endl;

		else if(n%3==2)
			cout << n/3 + 1 <<endl; 

		else
		{
			if(n==1)
				cout << 2 <<endl;
			else
			cout << (n-4)/3 + 2 <<endl;
		}
	}
}