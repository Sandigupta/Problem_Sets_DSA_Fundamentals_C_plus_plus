// #include<iostream>
// using namespace std;
// int main(){
//     float f = 10.2;
//     int x = 10;
//     void *ptr = &f;
//     cout << ptr<<endl;
//     // void *ptr;
//     ptr = &x;
//     cout << ptr;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    float f = 10.2;
    int x = 10;
    void *ptr = &f;
    cout << ptr<<endl;
    ptr = &x;
    cout << ptr << endl;
    // cout << *ptr << endl;-this will give you an error
    //  because it wee can not directly derefference
    //  the void pointer.

    int *integerPointer = (int *)ptr;//so we do type casting here.
    cout << *integerPointer << "\n";

    return 0;
}