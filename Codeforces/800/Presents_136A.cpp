#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n], test[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        test[arr[i]-1]=i+1;
    }
    for(int i=0; i<n; i++){
        cout<<test[i]<<" ";
    }
    return 0;
}