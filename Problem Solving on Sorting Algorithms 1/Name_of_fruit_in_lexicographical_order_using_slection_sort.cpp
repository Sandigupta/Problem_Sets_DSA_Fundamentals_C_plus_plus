#include<bits/stdc++.h>
using namespace std;

void f(vector<string> &v,int n){
     for (int i = 0; i < n-1; i++)
     {
        //  string current = v[i];
         int idx = -1;
         char current_min = v[i][0];
         for (int j = i + 1; j < n; j++)
         {
             if (v[j][0] < current_min) {
                current_min = v[j][0];
                idx = j;
            }
        }

        swap(v[i], v[idx]);
     }
     
}

int main(){
    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    f(v,n);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    
}

// if (int(current_min)>int(v[j][0])){
//                  current_min = v[j][0];
//                  idx = j;
//              }