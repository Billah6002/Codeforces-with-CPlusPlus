#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int arr[m];

    for(int i=0; i<m; i++){
        cin>>arr[i];
    }
    int ans = INT_MAX;

    sort(arr, arr+m);
    if(m<=4){
        cout<<arr[m-1]-arr[0];
    }
    for(int i=0; i<=m-n; i++){
        int d=arr[i+n-1]-arr[i];

        ans=min(ans,d);
    }
    cout<<ans<<endl;



}