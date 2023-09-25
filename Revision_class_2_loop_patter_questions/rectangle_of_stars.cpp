#include<iostream>
using namespace  std;

int main(){
   int r;
   cout<<"Enter the number of rows:"<<endl;
   cin>>r;

   int c;
   cout<<"Enter the number of coulumn:"<<endl;
   cin>>c;

   for (int i = 1; i <=r; i++)
   {
    for (int j = 0; j <=c; j++)
    {
        cout<<"*";
    }
    
    cout<<endl;
   }
   
}