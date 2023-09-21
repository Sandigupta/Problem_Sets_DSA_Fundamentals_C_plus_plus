#include<iostream>
#include<vector>
using namespace std;

int main(){
    int row ;
    cin>>row;

    // int colm[row];
    // cout<<"Enter the number of colums in each row:";

  
    // for (int i = 0; i < row; i++)
    // {
    //     cin>>colm[i];
    // }

      vector<vector<int>> vec(row);

    for (int i = 0; i < row; i++)
    {
        // int colmSize=colm[i];

        // vec[i]=vector<int>(colmSize);
        
        vec[i].resize(i+1);
        for (int  j = 0; j < i+1; j++)
        { 
            if(j==0 || j==i+1-1){
                vec[i][j]=1;
            }
            else
            {   
            vec[i][j]=vec[i-1][j]+vec[i-1][j-1];   
            }    
        }
            
    }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < vec[i].size(); j++)
    {
      cout<<vec[i][j]<<" ";
    }
    cout<<endl;
  }
  
        
}
    
    
