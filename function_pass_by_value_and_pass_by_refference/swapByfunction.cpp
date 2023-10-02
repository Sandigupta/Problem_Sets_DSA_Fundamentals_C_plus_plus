#include<iostream>
using namespace std;

void swap(int* ,int*);
int main(){
    int x,y;
    cout<<"Enter the two number: "<<endl;
    cin>>x>>y;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}
void swap( int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}