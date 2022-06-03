#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    

    int init =1;
    long long time =0;
    for(int i=1; i<=m; i++){
        int t; 
        cin>>t;
        if(t<init){
            time += n-(init - t);
            init = t;
        }
        else if(t > init ){
            time += t-init;
            init = t;
        }
    }
    cout<<time<<endl;
}