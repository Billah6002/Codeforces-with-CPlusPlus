#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, check = 0;;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        check += arr[i];
    }
    cout<<(double)check/n<<endl;
    return 0;
}