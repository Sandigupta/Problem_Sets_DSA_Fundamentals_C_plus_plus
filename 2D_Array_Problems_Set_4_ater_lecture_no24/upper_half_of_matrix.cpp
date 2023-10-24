#include<iostream>
#include<vector>
using namespace std;

void upper(int n){

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

for (int i = 0; i < n; i++)
{   
    
    for (int j = 0; j < n; j++)
    {  
        if(i>j){
            cout <<"  ";
        }
        else
        cout << v[i][j] <<" ";
    }
    cout << endl;
}


}


int main(){
    int n;
    cout << "Enter the size of squere matrix:";
    cin >> n;

    upper(n);
}