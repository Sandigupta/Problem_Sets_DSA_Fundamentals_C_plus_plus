#include<iostream>
using namespace std;
int main(){
    int x = 10;
    float y = 20.3738;

    int *ptr1 = &x;
    cout << ptr1 << endl;

     float *ptr2 = &y;
    cout << ptr2 << endl;
}