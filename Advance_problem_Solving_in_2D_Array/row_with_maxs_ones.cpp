#include<iostream>
#include<vector>
using namespace std;

// int rowMaxOne(vector<vector<int>>& matrx,int n,int m){
    
    // int maxOne=0;
    // int index=-1;
    // for (int i = 0; i < n; i++)
    // {   
    //     int currentOne=0;
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(matrx[i][j]==1)
    //         currentOne++;
    //     }

    //     if(maxOne<currentOne){
    //         maxOne=currentOne;
    //         index=i;
    //     }
        
    // }

    // return index;


    /*................................logic second...............................................*/
    // 0 1 1 1
    // 0 0 0 1
    // 0 0 1 1


//     int indexRow=-1;
//     int indexColm=-1;
//     int indexOfColmWithFIrstOne=m;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if(matrx[i][j]==1)
//             {
//             indexColm=j;
               
//             if (indexColm<indexOfColmWithFIrstOne)
//             {   
//                 indexOfColmWithFIrstOne=indexColm;
//                 indexRow=i;
//             }   
//             break;
//             }
//         }
      
//     }
    
//     int numberOfOne= m-indexOfColmWithFIrstOne;
//     return indexRow;
    
// }

/*........................................................logic third.......................................................*/
/*those row which have sum of its elements greater the every other row will be the that row with max number of ones*/


/*  ............................................Maam Logic to slove same quesstion......................................*/
  int maamWay(vector<vector<int>>& matx){
    int maxOne=INT_MIN;
    int maxOnesRow = -1;
    int columns = matx[0].size(); //it will give the number of column in the vector at 0th row.

    for(int i = 0; i < matx.size(); i++)
    {
        for (int j = 0; j < matx[i].size(); j++)
        {
            if (matx[i][j]==1)
            {
                int numberOfOnes = columns-j;
                if (numberOfOnes > maxOne)
                {
                   maxOne = numberOfOnes; 
                   maxOnesRow=i;
                }
               break; 
            }
            
        }
        
    }
    return maxOnesRow;
    
  }
/*.................................................../././././.........................................................*/


int main(){

    int row,colm;
    cout<<"Enter the row and columbe:";
    cin>>row>>colm;

    vector<vector<int>> matx(row,vector<int>(colm));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cin>>matx[i][j];
        }   
    }

    // int rowNumIs= rowMaxOne(matx,row,colm);
    int rowNumBymAM=maamWay(matx);

    cout<<"The row is"<<rowNumBymAM<<endl;
    
}