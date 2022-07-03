#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, it=0, p=0, arr[5], o=0;
        cin>>n;
        while(n>0){
            if(n%10!=0){
                int t= n%10;
                arr[o]=t*pow(10, p);
                o++;
                it++;

            }
            
            p++;
            n /=10;
        }
        cout<<it<<endl;
        for(int i=o-1; i>=0; i--){
            cout<<arr[i]<<" ";
        }
        
        cout<<endl;
    }
}