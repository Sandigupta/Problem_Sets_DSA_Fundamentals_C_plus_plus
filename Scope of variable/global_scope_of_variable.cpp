#include<iostream>
using namespace std;

void fun( );
string name="Sandeep Gupta";//this is global decalaration of variable.
int main(){
    cout<<name<<endl;
    name="Mandeep Gupta"; 
    fun();
}
void fun(  ){
    cout<<name<<endl;
}
