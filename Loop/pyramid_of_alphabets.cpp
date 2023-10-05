#include<iostream>
using namespace std;

int main()
{
    for (int i =1 ; i <=5; i++)
    {   
       for (int j=5-i; j>=1; j--)
       {
         cout<<"  ";
       }
        int k=65;
        for (int j = 1; j <=(2*i-1); j++)
        {
           char ch=(char)k;
           cout<<ch<<" ";
           k++; 
        }
       cout<<endl;  
    }    
    for (int i=1; i<=5; i++)
    {
      for (int j=1; j<=i; j++)
        {
            cout<<"  ";
        }
        int k=65;
        for (int j=1; j<=(9-2*i); j++)
        {
           char ch=(char)k;
           cout<<ch<<" ";
           k++;  
        } 
       cout<<endl;   
    }
}