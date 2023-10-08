#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the  natural number : ";
    cin>>n;
    int i=1;
    int sum=0;
    while (i<=n)
    {
       sum=sum+i;
       i++;
    }
    cout<<"Sum of n natural number is:"<<sum;
}