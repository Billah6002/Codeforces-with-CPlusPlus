#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        int check =0;
        sort(arr, arr+n);
        for(int i=1; i<n; i++){
            if((arr[i]- arr[i-1])>1){
                cout<<"NO"<<endl;
                check=1;
                break;
            }
        }
        if(check==0){
            cout<<"YES"<<endl;
        }
    }
}