#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin>>n>>k;

    for(int i=1; i<INT_MAX; i++){
        if((i*n)%10==k || (i*n)%10==0 ){
            cout<<i<<endl;
            break;
        }
    }
}