#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    cout<<"Enter an operation(+,-,*,/,%):";
    char op ;
    cin>>op;

    switch (op)
    {
        case '+':
        cout<<"Sum is :"<<n1+n2<<endl;
        break;
        case '-':
        cout<<"Subtraction is:"<<n1-n2<<endl;
        break;
        case '*':
        cout<<"Multiplication is :"<<n1*n2<<endl;
        break;
        case '/':
        cout<<"Division is :"<<n1/n2<<endl;
        break;
        case '%':
        cout<<"Remainder is :"<<n1%n2<<endl;
        break;
        default:
        cout<<"Enter a valid operator";
        break;
    }
}