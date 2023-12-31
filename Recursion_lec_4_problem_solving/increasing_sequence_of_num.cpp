
// sir ka method
#include<bits/stdc++.h>
using namespace std;

void f(int n){
    if(n<1){
        return ;
    }

    
    f(n - 1) ;
    cout << n << ", ";
}



int main(){
    int n = 4;
    f(n);
}


















// #include<bits/stdc++.h>
// using namespace std;
// int f(int n){
//     if(n==0){
//         // cout << 1 << endl;
//         return 0;
//     }

//      int current = n+f(n - 1);
//      cout <<current<<", ";
//      return 0;
// }
// int main(){
//     int n = 2;
//     f(n);
// }
