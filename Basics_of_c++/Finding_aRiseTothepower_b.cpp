#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Enter the base:";
    cin>>a;
    cout<<"Enter the power:";
    cin>>b;
    int fd=1;
    for (int i=1;i<=b;i++)
    {    
        fd=fd*a;
    }
   cout<<"Final result="<<fd<<endl; 
}