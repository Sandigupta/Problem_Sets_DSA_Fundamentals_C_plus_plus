#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<int>> rotating(vector<vector<int>>& sqrMatrx){
    for (int i = 0; i < sqrMatrx.size(); i++)
    {
        for (int j = 0; j <i; j++)
        {
    
           swap(sqrMatrx[i][j],sqrMatrx[j][i]);
            
        }
    }
    int numColm=sqrMatrx[0].size();
    for (int i = 0; i <sqrMatrx.size(); i++)
    {   
       
        // swap(sqrMatrx[i][0],sqrMatrx[i][numColm-1]);   
                //    OR 

           reverse(sqrMatrx[i].begin(),sqrMatrx[i].end());
    }

    return sqrMatrx;
    
}

int main(){
    int n;
    cout<<"Entetr the size of Square matrix:";
    cin>>n;

    vector<vector<int>> sqrMtrx(n ,vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n ; j++)
        {
            cin>>sqrMtrx[i][j];
        } 
    }

    // vector<vector<int>> clockedMatrx;
     rotating(sqrMtrx);
    
    cout<<"Your 90 degree rotated matrix is:<<endl"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<sqrMtrx[i][j]<<" ";

        } 
        cout<<endl;
    }

    
}