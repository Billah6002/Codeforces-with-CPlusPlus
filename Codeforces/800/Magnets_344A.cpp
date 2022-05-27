#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    cin>>n;
    string s;
    while(n--){
        string a;
        cin>>a;
        if(a!=s){
            ans++;
        }
        s=a;
    }
    cout<<ans<<endl;
    return 0;
}