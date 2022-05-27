#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    cin>>n;
    while(n--){
        int a, d;
        cin>>a>>d;
        if(d-a >1){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}