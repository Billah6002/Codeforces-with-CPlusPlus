#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0, ans = 0;
    cin>>n;
    while(a<n){
        if(n>=5){
            ans += n/5;
            n %= 5;
        }
        else if(n>=4){
            n -= 4;
            ans++;
        }
        else if(n>=3){
            n -= 3;
            ans++;
        }
        else if(n>3){
            n -= 3;
            ans++;
        }
        else if(n>2){
            n -= 2;
            ans++;
        }
        else{
            a++;
            n--;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}