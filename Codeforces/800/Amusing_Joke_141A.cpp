#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, s1, jumble;
    cin>>s>>s1>>jumble;

    string s2=s+s1;
    sort(s2.begin(), s2.end());
    sort(jumble.begin(),jumble.end());

    if(s2==jumble){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}