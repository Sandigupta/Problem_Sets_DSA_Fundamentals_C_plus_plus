#include<iostream>
using namespace std;

int main(){
    int d;
    cout<<"Enter the Number:";
    cin>>d;
    int digits=0;
    
    while (d!=0)
    {
        d=d/10;
        digits++;
    }
    cout<<digits<<endl;
}