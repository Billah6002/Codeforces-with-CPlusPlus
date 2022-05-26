#include <iostream>
#include <string>
using namespace std;

int main(){
    int t, ans=0;
    cin>>t;
    while(t--){
        int arr[3];
        int sum = 0;
        for(int i=0; i<3; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        if(sum>1){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}