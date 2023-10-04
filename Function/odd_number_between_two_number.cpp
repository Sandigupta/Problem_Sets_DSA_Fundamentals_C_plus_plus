#include<iostream>
using namespace std;

 int odd(int ,int);
 int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    int number= odd(a,b);
    cout<<endl<<"Number of odd number between two numbers are="<<number;

 }
 int odd(int x ,int y){
    int count=0;
      for(int i=x;i<=y;i++){
        if(i%2!=0){
        cout<<i<<" ";
        count++;}
      }
      return count;
 }