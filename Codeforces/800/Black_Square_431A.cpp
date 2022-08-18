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

	int a[5], ans=0;
	cin >> a[1] >> a[2] >> a[3] >> a[4];
	
	string s;
    cin >> s;
    
    for(int i=0; i<s.length(); i++)
    {
        int temp = s[i] - 48;
        ans+=a[temp];
    }
    cout << ans <<endl;
}
