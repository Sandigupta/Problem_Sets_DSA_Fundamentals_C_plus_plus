#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> vec(n,vector<int>(m));

    for (int i = 0; i < n; i++)
    {
    for (int j = 0; j < m; j++)
    {
        cin>>vec[i][j];
    }
    }

    for (vector<int> vec1d : vec)
    {
        for (int x : vec1d)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    
}