#include<iostream>
using namespace std;
int f(int n) {
    if(n==1)
    return 1;
    int result = n * f(n - 1);
    return result;
}
int main()
{
    int result = f(5);
    cout << result;
    return 0;
}