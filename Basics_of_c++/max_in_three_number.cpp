//Finding max in three numbers
#include<iostream>
using namespace std;

int main(){
    int Num1,Num2,Num3;
    cout<<"Enter three number: ";
    cin>>Num1>>Num2>>Num3;
    if (Num1>Num2&&Num1>Num3)
    {
        cout<<"Max is\n"<<Num1;
    }
    else if(Num2>Num1&&Num2>Num3){
        cout<<"Max is\n"<<Num2;
    }
    else
    cout<<"Max is\n"<<Num3;
}