#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int upper=0, lower=0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(upper>lower){
        for(int j=0; j<s.length(); j++){
            if(s[j]>='a' && s[j]<='z')
                s[j] -= 32;
        }
    }
    else{
        for(int i=0; i<s.length(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] += 32;
        }
        }
    }
    cout<<s<<endl;
    return 0;
}