#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> prifixOfMatrix(vector<vector<int>>& matrix,int m,int n){
     for (int i = 0; i < m; i++)
     {
        for (int j = 1; j < n; j++)
        {
            matrix[i][j] = matrix[i][j] + matrix[i][j - 1];
        }
        
     }

    for (int i = 1; i < m; i++)
     {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = matrix[i][j] + matrix[i-1][j];
        }
        
     }

     return matrix;
}



int main(){
    int m, n;
    cout << "Enter the row and column of matrix:";
    cin >> m >> n;

    vector<vector<int>> v(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
        
    }
    
    vector<vector<int>> v1 =prifixOfMatrix(v,m,n);

    cout << "Prifix Sum:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout << "\n";
    }

}