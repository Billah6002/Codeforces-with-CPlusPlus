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
	int n;
	cin >> n;
	string s1, s2;
	cin >> s1 >> s2;

	int ans = 0;
	for(int i=0; i<n; i++)
	{
		int curr = s1[i] - '0';
		int des = s2[i] - '0';

		if(curr>des)
			swap(curr , des);

		ans += min(des-curr, 10-des+curr);
	}
	cout << ans <<endl;
}