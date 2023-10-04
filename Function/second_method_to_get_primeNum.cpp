#include<iostream>
using namespace std;

int isprime(int);
int main()
{
    int x;
    cout<<"Enter a number:"<<endl;
    cin>>x;
    int y=isprime(x);
    if(y==0)
    cout<<"It is not a prime number"<<endl;
    else
    cout<<"It is a prime number"<<endl;
}
int isprime(int a)
{
    for (int  i = 2; i*i<=a; i++)
    {
        if(a%i==0)
        return 0;
    }
    return 1;
}   

