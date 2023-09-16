#include<iostream>
using namespace std;

int main(){
    int row,colm;
    cout<<"Enter the row and column of the matrix:";
    cin>>row>>colm;
    
    int mtrx[row][colm];
    cout<<"Enter the matrix elements:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cin>>mtrx[i][j];
        }    
    }
    int max=INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            if (mtrx[i][j]>max)
            {
              max=mtrx[i][j];
            }    
        }    
    }
    cout<<"Max element of matrix is:"<<max;
    
    
}