#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0; i<size(s); i++){
        if(i==0 && s[0]>=97 && s[0]<=122){
            char c = toupper(s[0]);
            cout<<c;
        }
        else
            cout<<s[i];
    }
    return 0;
}