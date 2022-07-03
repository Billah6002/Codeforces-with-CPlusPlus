#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int count = 0;

    for(int i=0; i<n; i++){
        int t;
        cin>>t;

        if(t<=5-k){
            count ++;
        }
    }
    cout << count/3;
}