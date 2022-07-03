#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        if(abs(a-b)%10==0){
            cout<<abs(a-b)/10<<endl;
        }
        else{
            cout<<(abs(a-b))/10 +1<<endl;
        }
        
        
    }
}