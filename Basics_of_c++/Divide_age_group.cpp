#include<iostream>
using namespace std;

int main(){
    int Age;
    cout<<"Enter age of the person: ";
    cin>>Age;
    if(Age>18)
    cout<<"Adult"<<endl;
    else if (Age>18&&Age<12)
    {
        cout<<"Teenager";
    }
    else
    {
        cout<<"Child";
    } 
}