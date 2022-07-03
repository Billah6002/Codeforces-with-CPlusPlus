#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	Case
	{
		int n, m, k;
		cin>>n>>m>>k;

		int each = n/k;
		if(m<=each)
			cout<<m<<endl;
		else
		{
			int h =each;
			int remain = m-each;

			int low = remain/(k-1);

			if(remain%(k-1)!=0)
				low++;

			cout<<h-low<<endl;
		}
	}
}