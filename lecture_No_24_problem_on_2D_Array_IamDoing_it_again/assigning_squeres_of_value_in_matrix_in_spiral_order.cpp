#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the ror and matrix only sing intiger:";
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         int ele;
    //         cin >> ele;
    //         v[i][j]=
    //     }
        
    // }
    int leftptr = 0;
    int rightptr = n - 1;
    int topptr = 0;
    int bottomptr = n - 1;

    int direction = 0;

    int enter = 1;
    while (leftptr<=rightptr && topptr<=bottomptr)
    {
        if (direction==0)
        {
            for (int col = leftptr; col <= rightptr; col++)
            {
                v[topptr][col] = enter;
                enter++;
            }
            topptr++;
        }
        else if (direction==1)
        {
            for (int row = topptr; row <= bottomptr; row++)
            {
                v[row][rightptr] = enter;
                enter++;
            }
            rightptr--;
        }
        else if(direction==2)
        {
           for (int col =rightptr; col >=leftptr; col--)
           {
                v[bottomptr][col] = enter;
                enter++;
           }
           bottomptr--;
        }
        else
        {
           for (int row =bottomptr ; row >= topptr; row--)
           {
                v[row][leftptr] = enter;
                enter++;
           }
           leftptr++;
        }
        
        direction = (direction + 1) % 4;
        
        

    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        cout << v[i][j] << " ";
        }
        cout << endl;
    }
    
    
}
