#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int arr[n];
    int maxNum = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>maxNum){
            maxNum=arr[i];
        }
    }
    long long int sum=0;
    for(int i=0; i<n; i++){
        sum += maxNum-arr[i];
    }
    cout<<sum<<endl;
}