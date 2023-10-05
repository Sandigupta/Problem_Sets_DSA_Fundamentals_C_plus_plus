#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of row and columbe: ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
       for (int j = 1; j <=n; j++)
       {  
         
         if(j==(n/2+1))//&&i!=3&&i!=4&&i!=6&&i!=7
         cout<<"*";
         else if (i==(n/2+1))
         {
         cout<<"*";
         }
         else{
           if(i!=(n/2+1))
           cout<<" ";
         }
       }
       cout<<endl;
    }
    
}