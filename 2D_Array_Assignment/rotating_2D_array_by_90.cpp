#include<iostream>
 #include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int row ,colm;
    cout<<"Enter the row and column of the matrix:";
    cin>>row>>colm;
    int mtrx[row][colm]; 
    cout<<"Enter the elemntes of the matrix:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cin>>mtrx[i][j];
        }  
    }
   
    for (int i = 0; i < row; i++)
    {
        for (int j = i+1; j < colm; j++)
        {
          swap(mtrx[i][j],mtrx[j][i]);
          
        }   
    }

   
    for (int i = 0; i < colm; ++i) {
        int left = 0;
        int right = colm - 1;
        while (left < right) {
            swap(mtrx[i][left], mtrx[i][right]);
            left++;
            right--;
        }
    }
    
     for (int i = 0; i < row; i++)
    {
        for (int j = colm-1; j >=0; j--)
        {
          cout<<mtrx[i][j]<<" ";
        }
       cout<<endl; 
    }
    
    cout<<"90 degree rotate:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cout<<mtrx[i][j]<<" ";
        }  
        cout<<endl;
    }
    
}