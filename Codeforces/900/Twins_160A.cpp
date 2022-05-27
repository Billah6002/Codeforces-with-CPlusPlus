#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, money=0, ans=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    
    for(int i=n-1; i>=0; i--){
        money +=arr[i];
        ans++;
        int check = 0;
        for(int j=i-1; j>=0; j--){
            check += arr[j];
        }
        if(money>check){
            cout<<ans<<endl;
            return 0;
        }
    }
    return 0;
}