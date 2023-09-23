#include<iostream>
#include<vector>

using namespace std;
int main(){
    int arr[]={3,4,5,2,6,4,5,1};
    int x;
    cout<<"Enter the element you want:";
    cin>>x;
    int n=sizeof(arr)/sizeof(arr[0]);

    int numPair=0;
    for (int i = 0; i <n ; i++)
    {
        for (int j = i+1; j <n ; j++)
        {
            if(arr[i]+arr[j]==x)
            {
                numPair++;
            }
            
        }
        
    }
    cout<<"Total number of pair:"<<numPair;
    
}