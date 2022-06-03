#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, crime=0, police=0;
    cin>>n;
    while(n--){
        int t;
        cin>>t;

        if(t==-1){
            if(police ==0){
                crime++;
            }
            else{
                police--;
            }
        }
        else{
            police+=t;
        }

    }
    cout<<crime<<endl;
}