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
    if(s[0]>='A' &&  s[0]<='Z')
    s[0] = s[0] +32;
    else
    s[0] -= 32;
   cout<<s<<endl;
}