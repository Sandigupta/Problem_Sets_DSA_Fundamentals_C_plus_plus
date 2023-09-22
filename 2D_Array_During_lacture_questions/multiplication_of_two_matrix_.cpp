#include<iostream>
using namespace std;

int main(){
    int row1 , colm1;
    cout<<"Enter the row and column of matrix 1:";
    cin>>row1>>colm1;
    
    int arr1[row1][colm1];
    cout<<"Enter the elements:"<<endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < colm1; j++)
        {
            cin>>arr1[i][j];
        }
        
    }


    int row2,colm2;
    cout<<"Enter the row and column of matrix 2:";
    cin>>row2>>colm2;
    int arr2[row2][colm2];
    cout<<"Enter the elements:"<<endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < colm2; j++)
        {
            cin>>arr2[i][j];
        }
    }


   
   if (colm1==row2)
   {
    int arr3[row1][colm2];
   for (int i = 0; i < row1; i++)
   { 
     for (int j = 0; j < colm2; j++)
     {  
        int value=0;

        for (int k = 0; k < colm1; k++)
        {
          value+=arr1[i][k]*arr2[k][j];
        }  
       arr3[i][j]=value;
     } 
   }
   

    cout << "Resultant matrix:" << endl;
   for (int i = 0; i < row2; i++)
   {
    for (int j = 0; j < colm2; j++)
    {
        cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
   }   
   }
   else
   {
    cout<<"Matrix multiplication is not possible:"<<endl;
   }
   
}