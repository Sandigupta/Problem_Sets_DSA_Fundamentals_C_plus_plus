#include<bits/stdc++.h>
using namespace std;

void f(string &s,int i){
     if(i==-1){
         return;
     }
     cout << s[i];
     f(s, i - 1);
     return;
}

int main(){
    string s;
    cin >> s;

    int idx = s.length()-1;
    f(s, idx);
}