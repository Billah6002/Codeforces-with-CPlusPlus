#include <bits/stdc++.h>
using namespace std;

int main(){
   int x, y, z;
   cin>>x>>y>>z;
   
   int ma = x+y+z;
   ma = max(ma, x*y*z);
   ma = max(ma, (x+y)*z);
   ma = max(ma, x*(y+z));
   ma = max(ma, x*y+1);
   ma = max(ma, x+y*z);

   cout<<ma<<endl;
    
}