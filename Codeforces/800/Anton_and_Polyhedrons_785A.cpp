#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="Icosahedron"){
            ans += 20;
        }
        else if(s=="Cube"){
            ans += 6;
        }
        else if(s=="Octahedron"){
            ans += 8;
        }
        else if(s=="Dodecahedron"){
            ans += 12;
        }
        else{     
            ans += 4;
        }
    }
    cout<<ans<<endl;
}