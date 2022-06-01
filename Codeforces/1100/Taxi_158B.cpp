//
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
        check += twos/2;
        twos %= 2;
    }
    if(threes<ones){
        check += threes;
        ones -= threes;
        threes=0;
    }
    else if(ones<=threes){
        check += ones;
        threes -= ones;
        ones =0;
    }
    if(threes>0){
        check += threes;
    }
    
    if(ones>0 || twos>0){
    
        int remain = ones + twos*2;
        if(remain%4==0){
            check += remain/4;
        }
        else{
            check+=(remain/4)+1;
        }
    }
    
    cout<<check<<endl;
    
    return 0;
}