#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, EvenCo=0, OddC0=0, eidx, odidx;
    cin>>n;
    for(int i=1; i<=n; i++){
        int t;
        cin>>t;
        if(t%2==0){
            EvenCo++;
            eidx=i;
        }
        else{
            OddC0++;
            odidx=i;
        }
    }
    if(EvenCo>OddC0){
        cout<<odidx<<endl;
    }
    else{
        cout<<eidx<<endl;
    }
}