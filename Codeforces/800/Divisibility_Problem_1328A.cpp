#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   while(n--){
       int a, d;
       cin>>a>>d;
       
       if(a%d!=0)
       cout<<d-(a%d)<<endl;

       else
       cout<<a%d<<endl;
   }
}