//calculating profit and loss.
#include<iostream>
using namespace std;

int main(){
    int cp;
    cout<<"Enter the cost price: "<<endl;
    cin>>cp;
    int sp;
    cout<<"Enter the selling price: "<<endl;
    cin>>sp;
    if(sp>cp)
    cout<<"Profit";
    else if(cp>sp)
    cout<<"Loss";
    else
    cout<<"Nither profit nor loss";
}