#include <bits/stdc++.h>
using namespace std;


int main(){
    int y;
    cin>>y;
    while(y++){
        int y1=y;
        int a = y1%10;
        y1 /= 10;
        int b = y1%10;
        y1 /=10;
        int c=y1%10;
        y1 /=10;
        int d = y1%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<y<<endl;
            return 0;
        }
    }

    return 0;
}