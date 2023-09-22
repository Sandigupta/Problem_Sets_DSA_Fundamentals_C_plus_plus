#include<iostream>
using namespace std;

int main(){
    int row,colm;
    cout<<"Enter the row and columb of matrix:";
    cin>>row>>colm;
    
    cout<<"Enter the elements of the matrix:"<<endl;
    int mtrx[row][colm];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cin>>mtrx[i][j];
        }  
    }
    
    
    // for (int i = 0,i2=0;i2<row, i < colm;i2++, i++)
    // {
    //     for (int j = 0,j2=0;j2<colm, j < row;j2++, j++)
    //     {
    //         mtrx[i2][j2]=mtrx2[i2][j2];
    //     }
        
    // }
    int mtrx2[colm][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
             int temp=mtrx[i][j];
             mtrx2[j][i]=temp;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cout<<mtrx[i][j]<<" ";
        }  
        cout<<endl;
    }

    cout<<"Transpose of the Matrix is:"<<endl;
    for (int i = 0; i < colm; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout<<mtrx2[i][j]<<" ";
        }
        cout<<endl;
    }
    
}