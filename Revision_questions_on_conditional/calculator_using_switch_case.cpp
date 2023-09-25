#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter the number:"<<" ";
    cin>>n1>>n2;

    char a;
    cout<<"Enter your operation(+,-,*,/,%):"<<" ";
    cin>>a;

    switch (a)
    {
    case '+':
        cout<<"Sum is :"<<n1+n2<<endl;
        break;

    case '-':
        cout<<"Substraction is :"<<n1-n2<<endl;
        break;

    case '*':
        cout<<"Multiplication is :"<<n1*n2<<endl;
        break;        
    
    case '/':
        cout<<"Division is :"<<n1/n2<<endl;
        break;

    case '%':
        cout<<"Modular is :"<<n1%n2<<endl;
        break;    
    default:
      cout<<"ERROR"<<endl;
        break;
    }

}