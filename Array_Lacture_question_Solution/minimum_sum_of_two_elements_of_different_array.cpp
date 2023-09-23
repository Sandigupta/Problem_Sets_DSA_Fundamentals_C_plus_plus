#include<iostream>
using namespace std;

int main(){
    int arr1[]={5,6,10,4,9};
    int arr2[]={1,2,3,4,5};

    int min1=arr1[0];
    for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
    {
        if(arr1[i]<min1)
        min1=arr1[i];
    }

      cout<<min1<<endl; 

    int min2=arr2[0];
    for (int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++)
    {
        if(arr2[i]<min2)
        min2=arr2[i];
    }

    cout<<min2<<endl;
    cout<<"Sum of two min elements is:"<<min1+min2<<endl;
}