#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 )
        return 0;
    if (n==1)
        return 1;

    int result = fib(n - 1) + fib(n - 2);
    return result;
}

int main(){
    int n;
    cin >> n;

    int nthfibNum = fib(n);
    cout << nthfibNum;
}