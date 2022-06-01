#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000000]={0};
    for(int i=2; i<=1000000; i++){
        if(arr[i]==0){
            for(int j=2; i*j<=1000000; j++){
                arr[i*j]=1;
            }
        }
    }
   int n;
   cin>>n;

   for(int i=0; i<n; i++){
       long long int t;
       cin>>t;
       if(t==1){
           cout<<"NO"<<endl;
           continue;
       }
       long long sq=sqrt(t);

       if(sq*sq==t && arr[sq]==0){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }

   }
   
}