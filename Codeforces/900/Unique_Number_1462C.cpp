#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define Case int t;cin>>t;for(int x=1; x<=t; x++)
using namespace std;

string rev(string s)
{
	int x = s.length();

	for(int i=0; i<x/2; i++)
	{
		swap(s[i], s[x-1-i]);
	}
	return s;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	Case
	{
		int n;
		cin>>n;
		//set<int>test;

		string ans;
		if(n<10)
		{
			cout<<n<<endl;
			continue;
		}

		
		
			if(n>9)
			{
				ans.push_back('9');
				//test.insert(9);
				n-=9;
			}
			if(n>=8)
			{
				ans.push_back('8');
				//test.insert(8);
				n-=8;
			}
			if(n>=7)
			{
				ans.push_back('7');
				//test.insert(7);
				n-=7;
			}
			if(n>=6)
			{
				ans.push_back('6');
				//test.insert(6);
				n-=6;
			}
			if(n>=5)
			{
				ans.push_back('5');
				//test.insert(5);
				n-=5;
			}
			if(n>=4)
			{
				ans.push_back('4');
				//test.insert(4);
				n-=4;
			}
			if(n>=3)
			{
				ans.push_back('3');
				//test.insert(3);
				n-=3;
			}
			if(n>=2)
			{
				ans.push_back('2');
				//test.insert(2);
				n-=2;
			}
			if(n>=1)
			{
				ans.push_back('1');
				//test.insert(1);
				n-=1;
			}

		
		if(n==0)
		{
			cout<<rev(ans)<<endl;;
		}
		else
			cout<<-1<<endl;
	}
}