#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    int lucky=0;
    cin>>n;
    while(n>0){
        if(n%10==4 || n%10==7){
            lucky++;
        }
        
        n /= 10;
    }
    if(lucky==0){
        cout<<"NO"<<endl;
        return 0;
    }
    while(lucky>0){
        if(lucky%10!=4 && lucky%10!=7){
            cout<<"NO"<<endl;
            return 0;
        }
        lucky /= 10;
    }
    cout<<"YES"<<endl;
    
    return 0;
}