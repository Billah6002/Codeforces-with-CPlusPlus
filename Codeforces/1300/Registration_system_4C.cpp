#include <bits/stdc++.h>
using namespace std;

int main(){
    map < string , int> reg;
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(reg[s]==0){
            cout<<"OK"<<endl;
            reg[s]=1;
        }
        else{
            cout<<s<<reg[s]<<endl;
            reg[s]++;
        }
    }
}