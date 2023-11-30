#include<iostream>
#include<vector>
using namespace std;

int houseGlassSum(vector<vector<int>>& matrix){
    int finalsum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            finalsum += matrix[i][j];
        }
        
    }

    finalsum = finalsum - (matrix[1][0] + matrix[1][2]);
    return finalsum;
}

int main(){
    int row, colm;
    cout << "Enter the row and colum, size must be greater than equal to 3:";
    cin >> row >> colm;

    vector<vector<int>> v(row, vector<int>(colm));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cin >> v[i][j];
        }
        
    }

    int sum = houseGlassSum(v);
    cout << sum << endl;

    return 0;
}