#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    string s;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        if(s[i]==s[i+1]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}