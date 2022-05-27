#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h;
    cin>>n>>h;
    int arr[n], ans=n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>h){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}