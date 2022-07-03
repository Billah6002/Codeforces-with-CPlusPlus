#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    if(t%2==0){
        cout<<t-8<<" "<<8<<endl;
    }
    else{
        cout<<t-9<<" "<<9<<endl;
    }
}