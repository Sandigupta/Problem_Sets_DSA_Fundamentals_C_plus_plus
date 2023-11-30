#include<iostream>
#include<vector>
using namespace std;

void maxSumRow(vector<vector<int>>& mtrx ,int m,int n,int& row,int& maxSum){
    // vector<vector<int>> mtrx(m, vector<int>(n));
     maxSum = 0;
    int firstRowSum = 0;
     row = 0;
    for (int i = 0; i < m; i++)
    {   
        int firstRowSum = 0;
        for (int j = 0; j < n; j++)
        {
            firstRowSum += mtrx[i][j];
        }
        if (maxSum<firstRowSum)
        {
            maxSum = firstRowSum;
            row = i;
        }    
    }
    
}


int main(){
    int m,n;
    cout << "Enter the row and column:";
    cin >> m>>n;

    vector<vector<int>> v(m,vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
        
    }
    
    int row,maxSum;
    maxSumRow(v, m, n,row,maxSum);
   
    cout <<"Row is:" <<row;
    cout <<"max sum  is:" <<row;
}











// #include <iostream>
// #include <vector>
// using namespace std;

// void maxSumRow(vector<vector<int>>& matrix, int m, int n, int& row, int& maxSum) {
//     maxSum = 0;
//     row = -1;

//     for (int i = 0; i < m; i++) {
//         int rowSum = 0;
//         for (int j = 0; j < n; j++) {
//             rowSum += matrix[i][j];
//         }
//         if (rowSum > maxSum) {
//             maxSum = rowSum;
//             row = i;
//         }
//     }
// }

// int main() {
//     int m, n;
//     cout << "Enter the row and column: ";
//     cin >> m >> n;

//     vector<vector<int>> v(m, vector<int>(n));
    
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> v[i][j];
//         }
//     }

//     int row, maxSum;
//     maxSumRow(v, m, n, row, maxSum);
   
//     cout << "Row with the maximum sum: " << row << endl;
//     cout << "Maximum sum in that row: " << maxSum << endl;

//     return 0;
// }
