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
	
	int m=0, c=0;
	Case
	{
		int a, b;
		cin >> a >> b;

		if(a>b)
			m++;
		else if(b>a)
			c++;
	}
	if(m>c)
	cout << "Mishka"<<endl;

	else if(c > m)
	cout << "Chris" <<endl;

	else
	cout << "Friendship is magic!^^" <<endl;	
}