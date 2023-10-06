#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number which factorial you want: ";
    cin>>n;
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    cout<<"Enter factorial of n num ber is:"<<fact<<endl;
}