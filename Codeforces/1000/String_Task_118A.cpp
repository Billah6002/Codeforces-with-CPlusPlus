#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0; i<size(s); i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] += 32;
        }
        if(s[i] != 'a' && s[i] !='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y'){
            cout<<'.'<<s[i];
        }
    }
    
    return 0;
}