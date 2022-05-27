#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(size(s)<=10)
            cout<<s<<endl;
        else{
            cout<<s[0]<<size(s)-2<<s[size(s)-1]<<endl;
        }
    }
    return 0;
}