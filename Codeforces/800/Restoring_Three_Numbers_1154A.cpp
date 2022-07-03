#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int maxNum = max(max(a,b), max(c,d));

    if(maxNum-a!=0){
        cout<<maxNum-a<<" ";
    }
    if(maxNum-b!=0){
        cout<<maxNum-b<<" ";
    }
    if(maxNum-c!=0){
        cout<<maxNum-c<<" ";
    }
    if(maxNum-d!=0){
        cout<<maxNum-d<<" ";
    }
}