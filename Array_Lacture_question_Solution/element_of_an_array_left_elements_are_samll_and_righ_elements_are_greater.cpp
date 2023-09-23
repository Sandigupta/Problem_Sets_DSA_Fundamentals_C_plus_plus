#include<iostream>
using namespace std;

int main(){
    int arr[]={1,6,5,7,10,8,9};

     int n=sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i <n ; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i]<arr[j] && arr[j]<arr[j+1])
            {
                
            }
            
        }
        
    }
    
}