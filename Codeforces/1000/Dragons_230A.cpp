#include <bits/stdc++.h>
using namespace std;
const int N=1e4+10;

int main(){
    int s, n;
    cin>>s>>n;

    pair <int, int> arr[1010];

    for(int i=0; i<n; i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr, arr+n);
    bool check=true;

    for(int i=0; i<n; i++){
        if(s<=arr[i].first){
            check=false;
            break;
        }
        s += arr[i].second;
    }
    if(check){
        cout<<"YES"<<endl;
    }  
    else{
        cout<<"NO"<<endl;
    }
}