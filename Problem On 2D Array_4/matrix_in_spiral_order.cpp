#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> mtrx(n,vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mtrx[i][j];
        }
        
    }


    int leftptr=0;
    int rightptr=m-1;
    int topptr=0;
    int bottomptr=n-1;

    int direction=0;


/*This is my logic that is come littel bit simillar to the maams logic but i am not able to find the correct ;ogic */
    // for (int i = topptr; i <bottomptr; i++)
    // {
    //     for (int i = leftptr; i < rightptr; i++)
    //     {
    //         cout<<mtrx[topptr][leftptr];
    //     }

        
    //     // rightptr--;

    //     for (int i = righ; i < bottomptr; i++)
    //     {
    //         cout<<mtrx[topptr][]
    //     }
        
    //     topptr++;
    //     break;
        
    // }
    
    while (leftptr<=rightptr && topptr<=bottomptr)
    {
        // left->right
        if (direction==0)
        {
            for (int col= leftptr; col<=rightptr; col++)
            {
                cout<<mtrx[topptr][col]<<" ";
            }
           topptr++; 
        }
        // top->bottom
         else if(direction==1){
                for (int row = topptr; row <= bottomptr; row++)
                {
                    cout<<mtrx[row][rightptr]<<" ";
                }
                
                rightptr--;
            }

            // right->left
           else if(direction==2){
            for (int col = rightptr; col >=leftptr; col--)
            {
               cout<<mtrx[bottomptr][col]<<" ";
            }
            
            bottomptr--;
        }    
        //  bottom ->top
        else 
        {
            for (int row = bottomptr; row >=topptr; row--)
            {
                cout<<mtrx[row][leftptr]<<" ";
            }
            leftptr++;
        }

         
        direction=(direction+1)%4;
        // 0 1 2 3
        
        
    }
    
}