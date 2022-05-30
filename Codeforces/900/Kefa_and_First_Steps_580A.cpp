#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=1, check=1;
    cin>>n;
    long int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        int y;
        if(i>0 && arr[i]>=arr[i-1]){
            check++;
        }
        else{
            check=1;
        }
        ans = max(check, ans);
    }
    cout<<ans<<endl;
    return 0;
}