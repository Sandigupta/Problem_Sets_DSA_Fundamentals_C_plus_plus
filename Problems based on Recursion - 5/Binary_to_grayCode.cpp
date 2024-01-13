#include<bits/stdc++.h>
using namespace std;
int f(string s,int i,int n){
   if(i==0){
       return s[0]- '0';
   }

   int result = (((s[i]- '0') ^ (s[i - 1]- '0')) + 10 * f(s, i-1, n));
   return result;
}

int main(){
    string s=" ";
    cin >>s;

    int l = s.length();
    int result=0;
    result = f(s,l-1,l);
    cout << result;
}



// #include<bits/stdc++.h>
// using namespace std;
// int f(string s,int i,int n){
//    if(i==n){
//        return 0;
//    }

//    int result = (s[i] ^ s[i + 1] + 10 * f(s, i++, n));
//    return result;
// }

// int main(){
//     string s=" ";
//     cin >>s;

//     int l = s.length();
//     int result;
//     result = f(s,0,l);
// }