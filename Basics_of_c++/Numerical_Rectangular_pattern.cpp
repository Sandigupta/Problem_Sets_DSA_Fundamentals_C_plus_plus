#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter the number of row and columbe: ";
    // cin>>n;
    // for (int i = 0; i < 7; i++)
    // {
       
    //    cout<<endl;
    // }
    for (int i = 0; i < 7; i++)
    { 
         for (int j = 1; j <= 7-i; j++)
       {
         cout<<j+i<<" ";
       }
      for (int j = 1; j < i+1; j++)
      {
        if(i!=0)
        cout<<j<<" ";
      }
     
     cout<<endl; 
    }
    
}