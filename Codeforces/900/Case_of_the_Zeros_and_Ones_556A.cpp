#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define test int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	
	int n;
	string s;
	cin>>n>>s;

	int one=0, zero=0;
	for(int i=0; i<n; i++)
	{
		if(s[i]=='1')
			one++;
		else
			zero++;
	}

	cout<<n-(min(one,zero)*2)<<endl;
}