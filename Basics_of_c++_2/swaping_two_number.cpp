#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enetr first number:";
    cin>>a;
    int b;
    cout<<"Enter your second number:";
    cin>>b;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b;
}