#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    cin>>n;
    int best, worst;
    for(int i=1; i<=n; i++){
        int t;
        cin>>t;
        if(i==1){
            best=t;
            worst=t;
            continue;
        }
        if(t>best || t<worst){
            ans++;
            if(t<worst){
                worst=t;
            }
            else{
                best=t;
            }
        }
    }
    cout<<ans<<endl;
}