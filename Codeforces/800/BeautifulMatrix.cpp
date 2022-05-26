#include <iostream>
#include <array>
using namespace std;

int main(){
    int i=5, j=5, ans;
    int arr[5][5];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cin>>arr[i][j];
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(arr[i][j]==1){
                ans = abs(2-i) + abs(2-j);
            }
        }
        
    }
    cout<<ans<<endl;
    return 0;

}