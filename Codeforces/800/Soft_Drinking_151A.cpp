//Error on test 5
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int a = min((k*l)/nl , min((c*d) , p/np));

    cout<<a/n<<endl;
}
