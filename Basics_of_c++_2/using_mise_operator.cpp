#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a numbetr"<<endl;
    cin>>a;
    char name='a';
    cout<<(sizeof(a))<<endl;
    cout<<(sizeof(name))<<endl;
    bool flag;
    a==name?flag=true:flag=false;
    cout<<flag<<endl;//false
    cout<<(&a)<<endl;
    

}