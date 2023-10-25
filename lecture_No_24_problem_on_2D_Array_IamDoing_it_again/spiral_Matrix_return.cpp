#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m, n;
    cout << "Enter the number of row and columne of the matrix:";
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
     for (int i = 0; i < m; i++)
     {
        for (int j = 0; j < n; j++)
        {
            int ele;
            cin >> ele;
            v[i][j]=ele;
        }
        
     }
     int leftptr = 0;
     int rightptr = n - 1;
     int topptr = 0;
     int bottomptr = m - 1;
     while (leftptr<=rightptr && topptr<=bottomptr)
    {
        for (int i = leftptr; i <= rightptr; i++)
        {
            cout << v[topptr][i] << " ";
        }
        topptr++;

        for (int i = topptr; i <= bottomptr; i++)
        {
            cout << v[i][rightptr] << " ";
        }
        rightptr--;

         if (topptr <= bottomptr) { 
        for (int i = rightptr; i >= leftptr; i--)
        {
            cout << v[bottomptr][i] << " ";
        }
        bottomptr--;
         }
        
         if (leftptr <= rightptr){
        for (int i = bottomptr; i >= topptr; i--)
        {
            cout << v[i][leftptr]<<" ";
        }
        leftptr++;
        }
    }
     
}