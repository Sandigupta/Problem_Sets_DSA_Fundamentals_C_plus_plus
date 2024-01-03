#include<bits/stdc++.h>
using namespace std;

string f(string s,int idx,int n){
    //  base case
    if(idx==n)
        return "";

    string result = "";//self work
    result += s[idx]; 

     return ((s[idx] == 'a') ? "" : result) + f(s, idx + 1, n);//ASSUMPTION
}

int main(){
    string s = "abcax";
    int n = s.size();
    string result = " ";
    result = f(s, 0, n);
    cout << result << endl;
}