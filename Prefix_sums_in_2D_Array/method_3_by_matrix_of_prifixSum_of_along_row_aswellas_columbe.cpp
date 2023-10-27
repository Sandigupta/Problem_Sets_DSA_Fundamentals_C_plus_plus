#include<iostream>
#include<vector>
using namespace std;

int SumFunct(vector<vector<int>>& v){
    int n = v.size();
    int m = v[0].size();

    int r1, c1;
    cin >> r1 >>c1;
    int r2, c2;
    cin >> r2 >> c2;
    
     for (int i = 0; i < n; i++)
    {
       for (int j = 1; j < m; j++)
       {
           v[i][j] += v[i][j-1];
       }
       
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = 1; i < n; i++)
        {
           v[i][j] += v[i - 1][j];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
           cout << v[i][j] << " ";
       }
       cout << endl;
    }

    int top_sum, left_sum, topleft_sum = 0 ,sum=0;
    if (r1!=0)
    {
       top_sum = v[r1 - 1][c2];
    }
    if (c1!=0)
    {
       left_sum = v[r2][c1 - 1];
    }
    if (r1!=0 && c1!=0)
    {
       topleft_sum = v[r1 - 1][c1 - 1];
    }
    sum = v[r2][c2] - top_sum - left_sum + topleft_sum;

    return sum;
}

int main(){
    int row, colm;
    cout << "Enter the row and columbe:";
    cin >> row >> colm;

 vector<vector<int>> mtrx(row, vector<int>(colm));
   for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cin >> mtrx[i][j];
        }
    
    }

    int sumOfElements = SumFunct(mtrx);
    cout << sumOfElements << endl;
  



}