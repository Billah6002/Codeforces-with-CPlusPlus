#include <bits/stdc++.h>
#define ph push_back
#define endl "\n"
#define ll long long int
#define Case int u;cin>>u;for(int o=1; o<=u; o++)
using namespace std;

void solve()
{
	int m, s;
	cin >> m >> s;

	if((m>1 && s==0) || s > 9*m)
	{
		cout <<"-1"<<" "<<"-1" <<endl;
		return;
	}


	if(s==0 && m==1)
	{
		cout <<0 << " "<< 0 <<endl;
		return;
	}

	int arr[m]={0};

	arr[0]=1;
	int sum=1;

	for(int i=m-1; i>=0; i)
	{
		if(sum==s)
			break;
		else
		{
			arr[i]++;
			sum++;
		}
		if(arr[i]==9)
			i--;
	}
	for(int i=0; i<m; i++)
	{
		cout << arr[i];
	}
	cout << " ";
	int arr1[m] = {0};
	arr1[0] = 1;

	int sum1 = 1;
	for(int i=0; i<m; i)
	{
		if(sum1==s)
			break;
		else
		{
			arr1[i]++;
			sum1++;
		}
		if(arr1[i]==9)
			i++;
	}
	for(int i=0; i<m; i++)
	{
		cout << arr1[i];
	}

}

int main()
{
	solve();
	
}