#include<iostream>
using namespace std;

int main(){
    int Num;
    cout<<"Enter a Decimal Value:";
    cin>>Num;
    int ans=0;
    int power=1;
    while (Num>0)
    {
        int r=Num%2;
        ans=ans+r*power;
        power=power*10;
        Num/=2;
    }
    cout<<ans<<endl;
}