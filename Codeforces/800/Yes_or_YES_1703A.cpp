#include <bits/stdc++.h>
#define ph push_back
#define endl "\n"
#define ll long long int
#define Case int u;cin>>u;for(int o=1; o<=u; o++)
using namespace std;

string tran(string s)
{
	for(int i=0; i<3; i++)
	{
		if(s[i]>='A' && s[i] <='Z')
			s[i]+=32;
	}

	return s;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	Case
	{
		string h;
		cin >> h;

		if(tran(h)=="yes")
			cout << "YES" <<endl;

		else
			cout << "NO" <<endl;
	}
}