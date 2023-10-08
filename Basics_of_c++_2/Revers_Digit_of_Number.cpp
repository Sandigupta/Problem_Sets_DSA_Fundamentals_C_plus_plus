#include<iostream>
using namespace std;
int main(){
    int Num;
    cout<<"Enter a number: ";
    cin>>Num;
    int RevNum=0;
    while(Num!=0)
    {
        int r=Num%10;
        RevNum=RevNum*10+r;
        Num/=10;
    }
    cout<<"Revers number is="<<RevNum<<endl;
}