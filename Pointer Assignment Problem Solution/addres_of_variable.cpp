#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;

    int *ptr = &x;
    cout << ptr << endl;
}
