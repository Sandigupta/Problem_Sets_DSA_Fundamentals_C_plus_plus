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

    int sum = 0;
    for (int i = r1; i <=r2 ; i++)
    {
        for (int j = c1; j <=c2; j++)
        {
            sum += v[i][j];
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