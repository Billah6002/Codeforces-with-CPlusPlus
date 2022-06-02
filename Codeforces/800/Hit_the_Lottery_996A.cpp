#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    cin>>n;
    while(n>0){
        if(n>=100){
            ans+=n/100;
            n %= 100;
        }
        else if(n>=20){
            ans += n/20;
            n %= 20;
        }
        else if(n>=10){
            ans++;
            n %= 10;
        }
        else if(n>=5){
            ans++;
            n %=5;
        }
        else{
        ans += n;
        break;
        }
    }
    cout<<ans<<endl;

}