#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin>>n;

	vector <int> one;
	vector <int> two;
	vector <int> three;

	for(int i=0; i<n; i++)
	{
		int temp;
		cin>>temp;

		if(temp==1)
			one.push_back(i+1);
		else if(temp==2)
			two.push_back(i+1);
		else
			three.push_back(i+1);

	}

	int team = min(one.size(), min(two.size(), three.size()));

	cout<<team<<endl;

	for(int i=0; i<team; i++)
		cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;

	
}