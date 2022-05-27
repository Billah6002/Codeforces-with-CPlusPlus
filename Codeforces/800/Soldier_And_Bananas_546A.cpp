#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w, price=0;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++){
        price += i*k;
    }
    if(price>n){
        cout<<price-n<<endl;
    }
    else 
        cout<<0<<endl;
    
    return 0;
}