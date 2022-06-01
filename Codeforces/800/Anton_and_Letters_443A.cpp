#include <bits/stdc++.h>
using namespace std;

int main(){
   string s;
   int check=1;
   set<char>s1;

   getline(cin, s);
   
   for(int i=1; i<s.length()-1; i+=3){
       s1.insert(s[i]);
   }
   cout<<s1.size()<<endl;
}