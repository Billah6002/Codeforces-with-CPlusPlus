#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin>>n>>s;
    set<char>s1;

    for(int i=0; i<n; i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] += 32;
        }
        s1.insert(s[i]);
    }
    if(s1.size()==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}