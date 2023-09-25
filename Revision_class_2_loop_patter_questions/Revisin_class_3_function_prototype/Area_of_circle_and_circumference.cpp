#include<iostream>
using namespace std;

void radiiCircum(int );

int main(){
    int rad;
    cout<<"Enter the radius of the circle:";
    cin>>rad;
   radiiCircum(rad);
    
}
void radiiCircum(int r){
    float area=3.14*r*r;
    cout<<"Area:"<<area<<endl;
    float circum=2*3.14*r;
   cout<<"Circumfereance:"<<circum;
    
}