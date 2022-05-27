#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, a;
    cin>>s>>a;

    for(int i=0; i<s.length(); i++){
        if(s[i] != a[s.length()-1-i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}