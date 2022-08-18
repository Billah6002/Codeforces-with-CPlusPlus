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

	string s;
	cin >> s;
	int N = s.length();

	int arr[N];

	arr[0]=0;
	int sum = 0;

	for(int i=1; i<N; i++)
	{
		if(s[i]==s[i-1])
		{
			sum++;
		}

		arr[i]=sum;
	}

	Case
	{
		int n, m;
		cin >> n >> m;

		cout << arr[m-1] - arr[n-1] << endl;
	}
}