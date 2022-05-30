//wrong ans on test 4
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, check=0, ones=0, twos=0, threes=0;
    cin>>n;
    
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        if(t==1){
            ones++;
        }
        else if(t==2){
            twos++;
        }
        else if(t==3){
            threes++;
        }
        else{
            check++;
        }
    }
    if(twos>0){
        if(twos%2==0){
            check += twos/2;
        }
        else{
            check += (twos+1)/2;
        }
    }
    if(ones <threes){
        check += ones;
        threes -= ones;
        check += threes;
    }
    else{
        check += threes;
        int n= ones - threes;
        if(n>0){
            if(n%2==0){
                check += n/2;
            }
            else{
                check += (n+1)/2;
            }
        }

    }
    
    cout<<check<<endl;
    
    return 0;
}