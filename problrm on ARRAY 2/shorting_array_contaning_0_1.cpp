#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
   int numZero=0;

    for (int i = 0; i <n; i++)
    {
        if (arr[i]==0)
        {
            numZero++;
        }  
    }
    
    int numOne=n-numZero;

    for (int i = 0; i < n; i++)
    {   
        if (i<numZero)
        {
            arr[i]=0;
        }
        
       else
       arr[i]=1;
    }
    
    for (int i = 0; i < n; i++)
    {
        /* code */
       cout<<arr[i]<<" ";
    }
    
    
}
