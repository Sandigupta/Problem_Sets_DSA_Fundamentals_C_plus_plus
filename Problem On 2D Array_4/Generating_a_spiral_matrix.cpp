#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> finalMatrix(int n)
{   

    vector<vector<int>> v(n,vector<int>(n));

    int leftptr=0;
    int rightptr=n-1;
    int topptr=0;
    int bottomptr=n-1;

    int direction=0;
    int value=1;
    while (leftptr<=rightptr && topptr<=bottomptr)
    {
        if (direction==0)
        {
           for (int col = leftptr;col<=rightptr;col++)
            {
            v[topptr][col]=value++;
            // cin>>v[topptr][col];
            }
          topptr++;
        }

        else if (direction==1)
        {
            for (int row = topptr; row<=bottomptr; row++)
            {
               v[row][rightptr]=value++;
            }
            rightptr--;
        }
        
        else if(direction==2)
        {
            for (int col = rightptr; col>=leftptr ;col--)
            {
                v[bottomptr][col]=value++;
            }
              bottomptr--;  
        }
        else
        {
            for (int row = bottomptr; row >= topptr; row--)
            {
                v[row][leftptr]=value++;
            }
            
            leftptr++;
        }
        
        direction=(direction+1)%4;
        
    }
  return v;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>> spiralmtrx(n,vector<int>(n));
    
    spiralmtrx = finalMatrix(n);

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<spiralmtrx[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}

