#include<iostream>
#include<vector>
using namespace std;

bool perfectMtrx(int n){
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int ele;
            cin >> ele;
            v[i][j] = ele;
        }
        
    }
    bool redflag = true;
    for (int i = 0; i < n; i++)
    {    

        for (int j = 0; j < n; j++)
        {   
            if(i==j ){
               if (v[i][j]==0)
               {
                   redflag = false;
               }
                
            }
            else if(i!=0 && j!=0){
                if(v[i][j]!=0){
                   redflag = false;
                }
            }
           
        }
               
        
    }
    return redflag;
}

int main(){
    int n;
    cout << "Enter the size of matrix:";
    cin >> n;

    bool flag = perfectMtrx(n);

    if (flag==true)
    {
      cout << "True" << endl;
    }
    else{
      cout << "False" << endl;
    }
    
    
}