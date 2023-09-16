// #include<iostream>
// using namespace std;

// int main(){
//     int row ,colm;
//     cout<<"Enter the row nand columb of the matrix:";
//     cin>>row>>colm;
    
//     int mtrx[row][colm];
//     cout<<"Enter the matrix elements:"<<endl;
//     for ( int i = 0; i <row; i++)
//     {
//         for (int j = 0; j < colm; j++)
//         {
//             cin>>mtrx[i][j];
//         }
        
//     }
    
//     int indexRow=-1,indexColm=-1;
//     for ( int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < colm; j++)
//         {
//             if (mtrx[i][j]==0)
//             {
//               indexRow=i;
//               indexColm=j;
//             }
            
//         }
        
//     }
     
     
//     for ( int i = 0; i < row; i++)
//     {    
//         mtrx[i][indexColm]=0;   
//     }
//     for (int j = 0; j < colm; j++)
//     {
//         mtrx[indexRow][j]=0;
//     }  
    

//     cout<<"Matrix with row and columbe are Zero:"<<endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < colm; j++)
//         {
//             cout<<mtrx[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    

    
    
    
// }



/*--------------------------second way---------------------------*/

#include <iostream>
#include <vector>

using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    
    bool firstRowZero = false;
    bool firstColZero = false;
    
    // Check if the first row needs to be set to zero
    for (int j = 0; j < n; ++j) {
        if (matrix[0][j] == 0) {
            firstRowZero = true;
            break;
        }
    }
    
    // Check if the first column needs to be set to zero
    for (int i = 0; i < m; ++i) {
        if (matrix[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }
    
    // Use the first row and first column to mark the zero columns and rows
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    
    // Set the elements to zero based on the first row and first column
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Set the first row and first column to zero if needed
    if (firstRowZero) {
        for (int j = 0; j < n; ++j) {
            matrix[0][j] = 0;
        }
    }
    
    if (firstColZero) {
        for (int i = 0; i < m; ++i) {
            matrix[i][0] = 0;
        }
    }
}

int main() {
    int m, n;
    
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    
    vector<vector<int>> matrix(m, vector<int>(n));
    
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "\nInput Matrix:" << endl;
    for (const vector<int>& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    setZeroes(matrix);
    
    cout << "\nMatrix after setting zeros:" << endl;
    for (const vector<int>& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}

/*---------------------------------------------*/