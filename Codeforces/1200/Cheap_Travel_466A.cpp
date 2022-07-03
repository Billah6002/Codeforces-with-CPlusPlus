#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b;
    cin>>n>>m>>a>>b;

    int spa= (n/m)*b;
    int nor =min ((n%m)*a, b);

    if(m*a<=b){
        cout<<n*a<<endl;
    }
    else
    cout<<spa+nor<<endl;
    return 0;
}