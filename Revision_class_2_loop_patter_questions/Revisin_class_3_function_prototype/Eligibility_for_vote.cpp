#include<iostream>
using namespace std;

void eligiblelity(int);

int main(){
int ageLimit;
    cout<<"Enter the age limit for:"<<endl;
cin>>ageLimit;
eligiblelity(ageLimit);

}
   void eligiblelity(int ageLimit){
    int yourAge;
    cout<<"Enter your age:";
    cin>>yourAge;
    if(yourAge>=ageLimit)
    cout<<"Your are eligible:";
    else
    cout<<"Your are not elegible:";
   } 