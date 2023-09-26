#include<iostream>
using namespace std;

void fun();
int main(){
  cout<<name<<endl;
  name="Sandeep gupta"; 
  fun();
  //cout<<x<<endl;-->not accessibale here because it is local to the main block.
  return 0;
}
void fun(){
    int x=10;//fun
    for(int y=0;y<5;y++){
        x=x+y;
        int z=x*x;
    }
    cout<<x<<" "<<y<<" "<<z<<endl;//note--> here y and z can not be acccesebale here beacause the are local to the "fun" function. 
}