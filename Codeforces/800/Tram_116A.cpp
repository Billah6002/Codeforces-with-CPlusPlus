#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int ans=INT_MIN,inside=0;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        inside += b-a;
        ans = max(ans, inside);
    }
    cout<<ans<<endl;
    return 0;
}