//Error on test 5
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b, c, count=0;
    cin>>n>>a>>b>>c;
    int maxR = max(a, max(b,c));
    int minR = min(a, min(b,c));

    while(n>(a+b+c)){
        n -= minR;
        count++;
    }
    

    if((a+b+c)==n){
        cout<<count + 3<<endl;
    }
    else if((a+b)==n || (b+c)==n || (a+c)==n){
        cout<<count+2<<endl;
    }
    else{
        cout<<count + 1<<endl;
    }
}
