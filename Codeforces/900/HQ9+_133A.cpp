#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=1; i<=s.length()&& i>=0; i++){
        if(s[i-1]=='H' || s[i-1]=='Q' || s[i-1]=='9'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}