#include <iostream>
using namespace std;

int main(){
    int n ,k, ans=0;
    cin>>n>>k;
    int arr[50];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        
    }
    for(int i=0; i<n; i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            ans++;
        }

    }
    cout<<ans<<endl;
    return 0;
}