#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int check=0;
    cin>>s;
    for(int i=0; i<size(s)-1; i++){
        for(int j=i+1; j<size(s); j++){
            if(s[i]==s[j]){
                check++;
                break;
            }
        }
    }
    if((size(s)-check)%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
        cout<<"IGNORE HIM!"<<endl;
    
    return 0;
}