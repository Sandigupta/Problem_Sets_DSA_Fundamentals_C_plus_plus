#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n/2; i++)
    {
      int  temp=arr[n-1-i];
        arr[n-1-i]=arr[i];
       arr[i]=temp;

    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}