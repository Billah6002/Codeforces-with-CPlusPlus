#include <bits/stdc++.h>
#define ph push_back
#define uset unordered_set
#define umap unordered_map
#define endl "\n"
#define ll long long int
#define Case int u;cin>>u;for(int o=1; o<=u; o++)
using namespace std;
void prin(int a, int n)
{
	for(int i=0; i<n; i++)
		cout << a << " ";
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	Case
	{
		int a, b;
		cin >> a>> b;

		if(b > a)
		{
			cout << "NO" <<endl;
			continue;
		}

		if(a%2==0)
		{
			if(b%2==0)
			{
				cout << "YES" <<endl;
				prin(1, b-1);
				cout<<a-b+1 <<endl;
			}
			else
			{
				if(b*2 > a)
					cout << "NO" <<endl;

				else
				{
					cout << "YES" <<endl;
					prin(2, b-1);
					cout << a- (2*(b-1)) <<endl;
				}
			}
		}
		else
		{
			if(b%2==0)
				cout << "NO" <<endl;

			else
			{
				cout << "YES" <<endl;
				prin(1, b-1);
				cout << a-b+1 <<endl;
			}
		}
	}
}