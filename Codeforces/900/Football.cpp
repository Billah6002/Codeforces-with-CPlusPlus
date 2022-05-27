#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int check=0;
    cin>>s;
    for(int i=0; i<size(s); i++){
        if(s[i]==s[i+1]){
            check++;
            if(check==6){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else {
            check=0;
        }
        
        
        
    }
    cout<<"NO"<<endl;
    return 0;
}