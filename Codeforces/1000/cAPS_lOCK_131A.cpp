#include <bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin>>s;
   string so=s;

   for(int i=1; i<s.length(); i++){
       if(s[i]>='A' && s[i]<='Z'){
           s[i] = s[i] + 32;
       }
       else{
           cout<<so<<endl;
           return 0;
       }
   }
   s[0] =(char) s[0] -32;
   cout<<s<<endl;
}