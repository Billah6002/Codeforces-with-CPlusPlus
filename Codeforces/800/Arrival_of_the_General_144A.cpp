#include <bits/stdc++.h>
using namespace std;

int main(){
   int n, ma=INT_MIN, maidx=-1, mi=INT_MAX, miidx=-1;
   cin>>n;
   int arr[n];

   for(int i=0; i<n; i++){
       cin>>arr[i];
       ma = max(ma,arr[i]);
       mi = min(mi, arr[i]);
   }
   for(int i=0; i<n; i++){
       if(arr[i]==ma){
           maidx=i;
           break;
       }
   }
   for(int i=0; i<n; i++){
       if(arr[i]==mi){
           miidx=i;
       }
   }
   if(maidx>miidx)
    
    cout<<(maidx-1) + (n-1-miidx)<<endl;

    else
        cout<<(maidx-1) + (n-miidx)<<endl;
   
   
}