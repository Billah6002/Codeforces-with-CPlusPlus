#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, sum =0;
    cin>>n>>k;
    int time = (4*60)-k;

    for(int i=1; i<=n; i++){
        sum += i*5;
        if(sum>time){
            cout<<i-1<<endl;
            break;
        }
        else if(i==n){
            cout<<i<<endl;
        }
    }

}