#include<iostream>
using namespace std;

int add(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    int Num1;
    cout<<"Enter number first:";
    cin>>Num1;
    int Num2;
    cout<<"Enter number second:";
    cin>>Num2;
    add(Num1,Num2);
    cout<<add(Num1,Num2)<<endl;
}