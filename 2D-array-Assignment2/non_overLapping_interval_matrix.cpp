#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;


int nonOverlapingInterval(int row){
    vector<vector<int>> str_End_Mtrx(row,vector<int>(2));
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2; j++)
        { 
            cin>>str_End_Mtrx[i][j];
        }
        
    }
     
     int  count=0;
     int arr[2];
    for (int i = 0; i < row; i++)
    {   
        for (int j = 1; j >=0  ; j--)
        {
            arr[j]=str_End_Mtrx[i][j];
        }
         
         int difference = arr[1]-arr[0];

        if(difference>1){
           count++;
        }  
    }
    
    return count;

}

int main(){
    int row;
    cout<<"Enter the number of row:";
    cin>>row;

   
    
    int numOfInterval=0;
    
    numOfInterval= nonOverlapingInterval(row);

    cout<<"Total number of pairs are:"<<numOfInterval<<endl;

}
