#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,a;
    cin>>s>>a;

    for(int i=0; i<s.length(); i++){
        if(s[i] != a[i]){
            s[i] = '1';
        }
        else{
            s[i] = '0';
        }
    }
    cout<<s<<endl;
    return 0;
}