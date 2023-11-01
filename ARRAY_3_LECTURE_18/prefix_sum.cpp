#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Input the length of array:";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array:"<<endl;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        // int a=arr[i];
        sum+=arr[i];
        arr[i]=sum;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}