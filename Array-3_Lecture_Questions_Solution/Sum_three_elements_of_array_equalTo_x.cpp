#include<iostream>
using namespace std;

int main(){
  int arr[]={4,3,2,1,0,5,0};
  int x;
  cout<<"Enter the elements you want:";
  cin>>x;

  int n=sizeof(arr)/sizeof(arr[0]);

  int pair=0;

  for (int i = 0; i <n ; i++)
  {
    for (int j = i+1; j < n; j++)
    {
        for (int k = j+1; k < n; k++)
        {
           if (arr[i]+arr[j]+arr[k]==x)
           {
              pair++;
           }
           
        }
        
    }
    
  }
  cout<<"Total number of pair:"<<pair;
}