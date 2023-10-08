#include<iostream>
using namespace std;

int main(){
    int Num;
    cout<<"Enter the number: ";
    cin>>Num;
    int sum=0;
    while (Num!=0)
    {
        int r;
        r=Num%10;
        sum=sum+r;
        Num=Num/10;
    }
    cout<<"Sum of digits are="<<sum<<endl;
}