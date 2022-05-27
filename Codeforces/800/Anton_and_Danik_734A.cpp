#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, Anton=0, Danik=0;
    string s;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='A'){
            Anton++;
        }
        else
            Danik++;
    }
    if(Anton>Danik){
        cout<<"Anton"<<endl;
    }
    else if(Danik>Anton){
        cout<<"Danik"<<endl;
    }
    else 
        cout<<"Friendship"<<endl;
    return 0;
}