#include <bits/stdc++.h>
using namespace std;

int main(){
   int n,p,q, check=0;
   cin>>n>>p;
   int arr[n];
   for(int i=0; i<n; i++){
       arr[i]=i+1;
   }
   for(int i=0; i<p; i++){
       int t;
       cin>>t;
        arr[t-1]=0;
       
   }
   cin>>q;
   for(int i=0; i<q; i++){
       int t;
       cin>>t;
       arr[t-1]=0;
   }
   for(int i=0; i<n; i++){
       check += arr[i];
   }
   if(check==0){
       cout<<"I become the guy."<<endl;
   }
   else{
       cout<<"Oh, my keyboard!"<<endl;
   }

   
}