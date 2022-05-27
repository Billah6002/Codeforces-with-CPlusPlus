#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, check=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        check += arr[i];
    }
    if(check>0){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
    return 0;
}