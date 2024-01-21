#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={20,50,40,10,30};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if(arr[j]>arr[j-1])
                swap(arr[j], arr[j - 1]);
        }
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}