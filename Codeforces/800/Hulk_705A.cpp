#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"I hate it"<<endl;
        return 0;
    }
    for(int i=1; i<=n; i++){
        if(i%2==0){
            cout<<"I love"<<" ";
        }
        else{
            cout<<"I hate"<<" ";
        }
        if(i!=n)
            cout<<"that"<<" ";
    }
    cout<<"it"<<endl;
    return 0;
}