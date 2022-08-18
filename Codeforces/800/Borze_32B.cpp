#include <bits/stdc++.h>
#define ph push_back
#define endl "\n"
#define ll long long int
#define Case int u;cin>>u;for(int o=1; o<=u; o++)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s, ans;
	cin >> s;
	
	for(int i=0; i<s.length(); i++)
	{
	    if(s[i]=='.')
	    ans.ph('0');
	    
	    else if(s[i]=='-' && s[i+1]=='.')
	    {
	        ans.ph('1');
	        i++;
	    }
	    else if(s[i]=='-' && s[i+1]=='-')
	    {
	        ans.ph('2');
	        i++;
	    }
	}
	cout << ans <<endl;
}
