#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=0, y=0, z=0;
    while(n--){
        int arr[3];
        for(int j=0; j<3; j++){
            cin>>arr[j];
            if(j==0){
                x += arr[j];
            }
            else if(j==1){
                y += arr[j];
            }
            else{
                z += arr[j];
            }
        }

    }
    if(x==0 && y==0 && z==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}