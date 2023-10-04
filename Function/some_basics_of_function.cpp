#include<iostream>
using namespace std;
#include<string.h>
int addition(int x,int y){
    return x+y;
}

void fun(string name){
    cout<<"Are you having fun"<<name<<"?"<<"\n";
}
int main(){
     fun("Sandeep");
    int x=addition(10,5);
    cout<<x<<endl;
    
}
