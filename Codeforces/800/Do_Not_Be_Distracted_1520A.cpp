#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin>>s;
        bool flag = true;


        for(int i=1; i<n; i++)
        {
            if(s[i]!=s[i-1] )
            {
                for(int j=i+1; j<n; j++)
                {
                    if(s[j]==s[i-1])
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if(!flag)
            break;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}