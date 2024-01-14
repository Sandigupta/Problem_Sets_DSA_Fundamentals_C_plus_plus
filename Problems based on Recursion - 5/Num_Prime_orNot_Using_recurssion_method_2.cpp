#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n,int i){
    if(i==1 || i==0){
        return false;
    }
    if(n%i==0){
        return false;
    }
    if(i*i>n){
        return true;
    }
    bool flag = is_prime(n, i + 1);
    return flag;
}

int main(){
    int n;
    cin >> n;

    if(is_prime(n,2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}