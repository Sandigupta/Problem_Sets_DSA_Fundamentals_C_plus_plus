#include<bits/stdc++.h>
using namespace std;

void f(string &s,int i){
   if(i==s.length()-1){
       cout << s[i];
       return;
   }
   else{
     if(s[i]!=s[i+1])
         cout << s[i];
   }

   f(s, i+1);
   return;
}


int main(){
    string s;
    cin >> s;

    int idx = 0;

    f(s,idx);
}
// abbcddaaaerr