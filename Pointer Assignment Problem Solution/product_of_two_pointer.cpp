#include<iostream>
using namespace std;
void multfun(int *ptr1, int *ptr2, int *prd){
    *prd = (*ptr1) * (*ptr2);

}

    int main()
{
    int a, b;
    cin >> a >> b;

    int prdct = 0;
    multfun(&a, &b, &prdct);
    cout << prdct;
}