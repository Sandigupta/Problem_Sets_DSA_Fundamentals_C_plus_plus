#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(arr[i]%2==0)
        cout<<"Your even Numbers are:"<<arr[i]<<endl;
        else if(arr[i]%2!=0)
        cout<<" Your Odd number are:"<<arr[i]<<endl;
    }
}