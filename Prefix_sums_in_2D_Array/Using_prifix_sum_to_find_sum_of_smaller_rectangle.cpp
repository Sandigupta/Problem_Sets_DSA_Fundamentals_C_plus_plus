#include<iostream>
#include<vector>
using namespace std;


int SumFunct(vector<vector<int>>& v){
    int n = v.size();
    int m = v[0].size();
    
    for (int i = 0; i < n; i++)
    {
       for (int j = 1; j < m; j++)
       {
           v[i][j] += v[i][j-1];
       }
       
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
           cout << v[i][j] << " ";
       }
       cout << endl;
    }
    cout << endl;
    int r1, c1;
    cin >> r1 >>c1;
    int r2, c2;
    cin >> r2 >> c2;

    int sum=0;
    for (int i = r1; i <=r2; i++)
    {  
        if(c1!=0){
            sum += (v[i][c2] - v[i][c1 - 1]);
        }
        else
        {
            sum += v[i][c2];
        }
        
      
    }
    
      
       
    return sum;
}

int main(){
    int row, colm;
    cin >> row >> colm;

    vector<vector<int>> matrx(row, vector<int>(colm));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cin >> matrx[i][j];
        }
        
    }
    int sumOfElements = SumFunct(matrx);
    cout << sumOfElements << endl;
}