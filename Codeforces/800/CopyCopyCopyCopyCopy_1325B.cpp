#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define test int t; cin>>t;while(t--)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	test
	{
		int n;
		cin>>n;
		set <int> st;

		for(int i=0; i<n; i++)
		{
			int temp;
			cin>>temp;

			st.insert(temp);
		}
		cout<<st.size()<<endl;
	}

}